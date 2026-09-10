// Address: 0046585c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046585c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(char *)(param_1 + 0x62) == '\0') && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x61);
    if (DAT_00465974 == bVar1) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      if ((bVar1 & 4) == 0) {
        iVar3 = (int)*(uint *)(param_1 + 0x48) >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 0x48) & 1) != 0);
        }
        *(int *)(param_1 + 0x88) = iVar3 + *(int *)(param_1 + 0x40);
      }
      else if ((bVar1 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x40);
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x48);
      }
      if ((bVar1 & 8) == 0) {
        iVar3 = (int)*(uint *)(param_1 + 0x4c) >> 1;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 0x4c) & 1) != 0);
        }
        *(int *)(param_1 + 0x8c) = iVar3 + *(int *)(param_1 + 0x44);
      }
      else if ((bVar1 & 2) == 0) {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
      }
      else {
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
      }
      iVar3 = *(int *)(param_1 + 0x30);
      if (iVar3 != 0) {
        if ((*(byte *)(iVar3 + 0x1c) & 2) == 0) {
          cVar2 = FUN_0046cde4(iVar3);
          if (cVar2 == '\0') {
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x48);
            *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x4c);
          }
          else {
            (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(*(int **)(param_1 + 0x30),auStack_18);
            *(undefined4 *)(param_1 + 0x90) = uStack_10;
            *(undefined4 *)(param_1 + 0x94) = uStack_c;
          }
        }
        else if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar3 + 0x1fa);
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar3 + 0x1fe);
        }
      }
    }
  }
  return;
}

