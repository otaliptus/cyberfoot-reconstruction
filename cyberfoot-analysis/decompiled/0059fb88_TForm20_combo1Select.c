// Address: 0059fb88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm20_combo1Select(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
  if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x1b) {
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxgolst");
    FUN_0050a804(uVar2,1);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxjogost");
    FUN_0050a804(uVar2,1);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxgols");
    FUN_0050a804(uVar2,0);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxjogos");
    FUN_0050a804(uVar2,0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x330),0);
  }
  else {
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxgolst");
    FUN_0050a804(uVar2,0);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxjogost");
    FUN_0050a804(uVar2,0);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxgols");
    FUN_0050a804(uVar2,1);
    uVar2 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x2fc),"nxjogos");
    FUN_0050a804(uVar2,1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  }
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
  if (*(int *)(DAT_006d2480 + iVar1 * 4) == 1) {
    FUN_0059e9d0(param_1,1,DAT_006d247c,1);
    return;
  }
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
  if (*(int *)(DAT_006d2480 + iVar1 * 4) == 2) {
    FUN_0059e9d0(param_1,1,DAT_006d247c,2);
  }
  else {
    iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    if (*(int *)(DAT_006d2480 + iVar1 * 4) == 3) {
      FUN_0059e9d0(param_1,1,DAT_006d247c,3);
    }
    else {
      iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
      if (*(int *)(DAT_006d2480 + iVar1 * 4) == 4) {
        FUN_0059e9d0(param_1,1,DAT_006d247c,4);
      }
      else {
        iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
        if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x16) {
          FUN_0059e9d0(param_1,2,DAT_006d247c,0xffffffff);
        }
        else {
          iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
          if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x17) {
            FUN_0059e9d0(param_1,4,0x1d,1);
          }
          else {
            iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
            if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x18) {
              FUN_0059e9d0(param_1,4,3,0);
            }
            else {
              iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
              if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x19) {
                FUN_0059e9d0(param_1,6,0x1d,1);
              }
              else {
                iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
                if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x1a) {
                  FUN_0059e9d0(param_1,6,3,0);
                }
                else {
                  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
                  if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x1b) {
                    FUN_0059e35c(param_1,0);
                  }
                  else {
                    iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
                    if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x1c) {
                      FUN_0059e9d0(param_1,4,1,2);
                    }
                    else {
                      iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
                      if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x1d) {
                        FUN_0059e9d0(param_1,4,9,3);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

