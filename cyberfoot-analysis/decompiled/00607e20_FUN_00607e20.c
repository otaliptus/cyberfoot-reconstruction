// Address: 00607e20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00607e20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = PTR_DAT_0066b5b8;
  puVar4 = PTR_DAT_0066b238;
  iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + param_1 * 0x2f8);
  iVar6 = 1;
  do {
    if (*(char *)(*(int *)puVar5 + 0x86 +
                 *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130) != '\0') {
      if (*(int *)(*(int *)puVar4 + iVar2 * 0xf8 + 0x58 + iVar6 * 4) == 1) {
        if ((*(int *)(*(int *)puVar4 + iVar2 * 0xf8 + 0x58 + iVar6 * 4) == 1) && (0x5a < param_2)) {
          iVar3 = *(int *)(*(int *)puVar5 + 0x18 +
                          *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
          if (iVar3 < 0x38) {
            if (iVar3 < 0x22) {
              if (iVar3 - 1U < 0x1a) {
                piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                                *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
                *piVar1 = *piVar1 + -1;
              }
              else if (iVar3 - 0x1bU < 7) {
                piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                                *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
                *piVar1 = *piVar1 + -2;
              }
            }
            else if (iVar3 - 0x22U < 3) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -3;
            }
            else if (iVar3 - 0x25U < 6) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -4;
            }
            else if (iVar3 - 0x2bU < 0xd) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -5;
            }
          }
          else if (iVar3 < 0x47) {
            if (iVar3 - 0x38U < 5) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -6;
            }
            else if (iVar3 - 0x3dU < 10) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -7;
            }
          }
          else if (iVar3 - 0x47U < 10) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -8;
          }
          else if (iVar3 - 0x51U < 10) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -9;
          }
          else if (iVar3 - 0x5bU < 0x38e) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -10;
          }
        }
      }
      else {
        iVar3 = *(int *)(*(int *)puVar5 + 0x18 +
                        *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
        if (iVar3 < 0x38) {
          if (iVar3 < 0x22) {
            if (iVar3 - 1U < 0x1a) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -1;
            }
            else if (iVar3 - 0x1bU < 7) {
              piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                              *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
              *piVar1 = *piVar1 + -2;
            }
          }
          else if (iVar3 - 0x22U < 3) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -3;
          }
          else if (iVar3 - 0x25U < 6) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -4;
          }
          else if (iVar3 - 0x2bU < 0xd) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -5;
          }
        }
        else if (iVar3 < 0x47) {
          if (iVar3 - 0x38U < 5) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -6;
          }
          else if (iVar3 - 0x3dU < 10) {
            piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                            *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
            *piVar1 = *piVar1 + -7;
          }
        }
        else if (iVar3 - 0x47U < 10) {
          piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                          *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
          *piVar1 = *piVar1 + -8;
        }
        else if (iVar3 - 0x51U < 10) {
          piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                          *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
          *piVar1 = *piVar1 + -9;
        }
        else if (iVar3 - 0x5bU < 0x38e) {
          piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                          *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
          *piVar1 = *piVar1 + -10;
        }
      }
      if ((*(char *)(*(int *)puVar5 + 0x15 +
                    *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130) != '\0') &&
         (0x21 < *(int *)(*(int *)puVar5 + 0x18 +
                         *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130))) {
        piVar1 = (int *)(*(int *)puVar5 + 0x78 +
                        *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130);
        *piVar1 = *piVar1 + 1;
      }
      if (*(int *)(*(int *)puVar5 + 0x78 +
                  *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130) < 1) {
        *(undefined4 *)
         (*(int *)puVar5 + 0x78 + *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130)
             = 1;
      }
      if (100 < *(int *)(*(int *)puVar5 + 0x78 +
                        *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130)) {
        *(undefined4 *)
         (*(int *)puVar5 + 0x78 + *(int *)(*(int *)puVar4 + iVar2 * 0xf8 + -4 + iVar6 * 4) * 0x130)
             = 100;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xc);
  return;
}

