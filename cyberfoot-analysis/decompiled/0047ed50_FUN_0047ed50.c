// Address: 0047ed50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ed50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 2) == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if ((param_2 <= iVar2) && (iVar2 = param_2, param_2 < 0)) {
      iVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 0xc) = iVar2;
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_0046c660(*(undefined4 *)(param_1 + 4),iVar1 - iVar2,0);
      }
      else {
        FUN_0046c660(*(undefined4 *)(param_1 + 4),0,iVar1 - iVar2);
      }
      if ((((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 0x10) != 0) &&
          (iVar2 = FUN_0047e4c0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x250) != 0)) {
        (**(code **)(**(int **)(iVar2 + 0x250) + 0xc))();
      }
    }
    FUN_0046cae0(*(undefined4 *)(param_1 + 4));
    iVar2 = (**(code **)PTR_DAT_0066b100)();
    if (iVar2 != *(int *)(param_1 + 0xc)) {
      FUN_0046cae0(*(undefined4 *)(param_1 + 4));
      (**(code **)PTR_DAT_0066b72c)();
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}

