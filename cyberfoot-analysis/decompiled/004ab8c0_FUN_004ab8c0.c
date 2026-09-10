// Address: 004ab8c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ab8c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004a63c4(*(undefined4 *)(param_1 + 0x138),PTR_PTR_004a5790);
  iVar2 = FUN_00403c34(uVar1,PTR_PTR_004a5790);
  if (iVar2 != 0) {
    uVar1 = FUN_004a7510();
    return uVar1;
  }
  return 0;
}

