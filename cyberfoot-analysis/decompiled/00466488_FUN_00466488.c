// Address: 00466488
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00466488(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = FUN_0041e078(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x198),param_1);
    if (-1 < iVar3) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x198);
      iVar2 = *(int *)(iVar1 + 8);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar2 <= param_2) {
        param_2 = iVar2 + -1;
      }
      if (iVar3 != param_2) {
        FUN_0041df0c(iVar1,iVar3);
        FUN_0041e098(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x198),param_2,param_1);
        FUN_00466660(param_1,*(undefined1 *)(param_1 + 0x57),1);
        iVar3 = FUN_0047e4e8(param_1);
        if ((*(byte *)(iVar3 + 0x54) & 4) != 0) {
          FUN_00403c80(iVar3,1);
        }
      }
    }
  }
  return;
}

