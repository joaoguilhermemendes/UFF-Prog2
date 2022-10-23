def hanoi(disc, ori, dest, aux):
    if disc == 1:
        print('Move disc {} from tower {} to the tower {}'.format(disc, ori, dest))
        return

    hanoi(disc - 1, ori, aux, dest)
    print('Move disc {} from tower {} to the tower {}'.format(disc, ori, dest))
    hanoi(disc - 1, aux, dest, ori)

hanoi(3, 'A', 'B', 'C')