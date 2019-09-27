import sys, atexit, msvcrt
from time import sleep
sys.path.append("../lib/")
from moway_lib import *

if __name__ == '__main__':
    atexit.register(exit_mow)

channel = 18
moway.usbinit_moway()
ret = moway.init_moway(channel)
print(ret)
if ret==0:
    print('Moway RFUSB Connected')
else:
    print('Moway RFUSB not Connected. Exit')
    exit(-1)

#dudz e loigez
speed = 50
preto = 50
azul = 20
'''def procurar():
    if moway.get_line_left() < 30 or moway.get_line_right() < 30:
        moway.command_moway(CMD_STOP)
'''


def redefinir():
    moway.command_moway(CMD_BACK,0)
    moway.command_moway(CMD_STOP)
    moway.command_moway(CMD_LEFT_SIMPLE, 0)
    moway.command_moway(CMD_GO, 0)

def bifurcacao():
    #analisar a direita
    moway.command_moway(CMD_STOP, 0)
    moway.set_speed(speed)
    moway.command_moway(CMD_RIGHT_SIMPLE, 0)
    moway.command_moway(CMD_GO, 0)

    if moway.get_line_left() > preto or moway.get_line_right() > preto:
        return #?????

    #analisar a frente
    redefinir()

    if moway.get_line_left() > preto or moway.get_line_right() > preto:
        return

    #analisar a esquerda
    redefinir()

    if moway.get_line_left() > preto or moway.get_line_right() > preto:
        return

    #voltar
    redefinir()
    return

moway.set_distance(20)
moway.set_speed(speed)
moway.set_rotation(90)

while True:
    if moway.get_line_left() > preto and moway.get_line_right() > preto:
        moway.command_moway(CMD_FRONTLEDON)
        moway.command_moway(CMD_LINE_FOLLOW_R, 0)
 
        '''moway.command_moway(CMD_GO, 0)
        sleep(0.1)'''
    else:
        moway.command_moway(CMD_FRONTLEDOFF)
        bifurcacao()

    if moway.get_obs_center_left()>10 or moway.get_obs_center_right()>10:
        moway.command_moway(CMD_LEDSON, 0)
        moway.command_moway(CMD_STOP, 0)
        moway.command_moway(CMD_MELODYCHARGE, 0)
        break




