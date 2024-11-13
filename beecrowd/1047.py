[hi, mi, hf, mf] = [int(x) for x in input().split()]

diffMin = 0
if mf < mi:
    diffMin = 60 - mi + mf
    hf -= 1
else:
    diffMin = mf - mi

diffHour = 0
if hf < hi:
    diffHour = 24 - hi + hf
else:
    diffHour = hf - hi

if diffHour == 0 and diffMin == 0:
    print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
else:
    print(f'O JOGO DUROU {diffHour} HORA(S) E {diffMin} MINUTO(S)')