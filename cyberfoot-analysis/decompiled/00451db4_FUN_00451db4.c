// Address: 00451db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00451db4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (1 < *(byte *)(param_1 + 0x215)) {
    FUN_0046cae0(param_1);
    iVar1 = FUN_00432e30();
    if (iVar1 != -1) {
      uVar2 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar1);
    }
  }
  return uVar2;
}

