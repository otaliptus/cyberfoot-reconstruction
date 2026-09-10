// Address: 004f6100
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6100(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_004f590c(PTR_DAT_004f56c8,1);
  uVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x1034),param_2);
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  if ((*(char *)(*(int *)(iVar2 + 0x18) + 0xc) == '\0') ||
     (*(char *)(*(int *)(iVar2 + 0x18) + 0x21) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(iVar2 + 0x21) = uVar1;
  FUN_004f5950(*(undefined4 *)(iVar2 + 0x18));
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x102c);
  *(int *)(iVar2 + 0x14) = *(int *)(*(int *)(iVar2 + 0x18) + 0x14) + 1;
  FUN_0041e098(*(undefined4 *)(param_1 + 0x1034),param_3,iVar2);
  *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + 1;
  if (*(char *)(iVar2 + 0x21) != '\0') {
    *(int *)(param_1 + 0x1044) = *(int *)(param_1 + 0x1044) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x1008);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x1010) + 0x30))(*(int **)(param_1 + 0x1010),iVar4);
      uVar3 = FUN_004f59d4(param_1,uVar3);
      FUN_0041e098(*(undefined4 *)(param_1 + 4 + iVar4 * 4),param_3,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

