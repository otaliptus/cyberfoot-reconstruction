// Address: 00434cbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434cbc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = GetDeviceCaps(*(HDC *)(*(int *)(param_1 + 0x58) + 0x20),0x5a);
  if (iVar1 != *(int *)(*(int *)(param_1 + 0xc) + 0x1c)) {
    uVar2 = FUN_0042a624(*(int *)(param_1 + 0xc));
    iVar3 = GetDeviceCaps(*(HDC *)(*(int *)(param_1 + 0x58) + 0x20),0x5a);
    iVar1 = *(int *)(param_1 + 0xc);
    *(int *)(iVar1 + 0x1c) = iVar3;
    FUN_0042a640(iVar1,uVar2);
  }
  return;
}

