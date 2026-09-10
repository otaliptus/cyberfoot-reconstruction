// Address: 00422210
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422210(ushort param_1,char param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00405eec(*(undefined4 *)(param_4 + -4));
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      if (param_2 == '\0') {
        iVar1 = *(int *)(*(int *)(param_4 + -4) + iVar3 * 4);
        *(ushort *)(iVar1 + 0x1c) = ~param_1 & *(ushort *)(iVar1 + 0x1c);
      }
      else {
        iVar1 = *(int *)(*(int *)(param_4 + -4) + iVar3 * 4);
        *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) | param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

