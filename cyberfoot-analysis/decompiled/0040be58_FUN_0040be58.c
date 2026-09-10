// Address: 0040be58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040be58(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_104 [256];
  
  iVar1 = FUN_00404ba4(param_1);
  if (0xe0 < iVar1) {
    FUN_0040941c(PTR_PTR_0066b0e0);
  }
  uVar2 = FUN_00404da4(param_1);
  uVar2 = FUN_0040b78c(local_104,&stack0x00000004,0,uVar2);
  FUN_004049c4(param_2,local_104,uVar2);
  return;
}

