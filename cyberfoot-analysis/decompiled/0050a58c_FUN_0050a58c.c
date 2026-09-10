// Address: 0050a58c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a58c(int param_1,ushort param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  
  if (((param_2 & 0x1000) != 0) && ((*(byte *)(param_1 + 0x7d) & 0x10) == 0)) {
    iVar4 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x38));
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        iVar5 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))(*(int **)(param_1 + 0x38),iVar7);
        if (param_1 != iVar5) {
          iVar5 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))(*(int **)(param_1 + 0x38),iVar7);
          uVar6 = ~DAT_0050a644;
          uVar1 = *(ushort *)(iVar5 + 0x7c);
          iVar5 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))(*(int **)(param_1 + 0x38),iVar7);
          *(ushort *)(iVar5 + 0x7c) = uVar6 & uVar1;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (((*(byte *)(param_1 + 0x7c) & 1) == 0) || ((param_2 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *(ushort *)(param_1 + 0x7c) = param_2;
  if (*(int *)(param_1 + 0x38) != 0) {
    cVar3 = FUN_0050b12c(*(int *)(param_1 + 0x38));
    if (cVar3 == '\0') {
      if (!bVar2) {
        FUN_0050b490(*(undefined4 *)(param_1 + 0x38),param_1,1);
      }
      FUN_0050abec(param_1,6,0xffffffff);
      FUN_0050aba0(param_1,2);
    }
  }
  return;
}

