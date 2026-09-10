// Address: 00509e18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00509e18(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00508f04);
  if (cVar1 == '\0') {
    FUN_0041e66c(param_1,param_2);
  }
  else {
    FUN_00509e84(param_1,*(undefined4 *)(param_2 + 0x10));
    FUN_00509e9c(param_1,*(undefined4 *)(param_2 + 8));
    FUN_00509eb0(param_1,*(undefined4 *)(param_2 + 0xc));
    FUN_00509ec4(param_1,*(undefined4 *)(param_2 + 0x14));
  }
  return;
}

