// Address: 00433cb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00433cb0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (DAT_0066c944 == 0) {
    DAT_0066c944 = FUN_00433d44(PTR_DAT_00433b98,1);
  }
  iVar1 = DAT_0066c944;
  if (DAT_0066c944 != 0) {
    iVar1 = DAT_0066c944 + 8;
  }
  FUN_004068c4(param_1,iVar1,&DAT_00433cf8);
  return 0;
}

