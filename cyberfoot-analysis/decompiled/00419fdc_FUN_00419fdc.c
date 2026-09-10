// Address: 00419fdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00419fdc(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined1 local_10;
  
  iVar1 = FUN_00419d58(*(undefined4 *)*param_2,param_3);
  if (iVar1 < 0) {
    local_10 = 0xb;
    local_14 = param_3;
    FUN_0040e468(PTR_DAT_004194f8,1,PTR_PTR_0066af74,0,&local_14);
    iVar1 = FUN_00404250();
  }
  FUN_00419f5c(param_1,param_2,iVar1);
  return;
}

