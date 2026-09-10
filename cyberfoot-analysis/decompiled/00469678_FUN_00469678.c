// Address: 00469678
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469678(undefined4 param_1,int param_2)

{
  char cVar1;
  
  FUN_004673cc(param_1,0xb036,param_2,0);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00461f94);
  if (cVar1 == '\0') {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      FUN_00466660(param_2,*(undefined1 *)(param_2 + 0x57),0);
    }
  }
  else {
    FUN_004694f0(param_2,1);
    FUN_00469f58(param_2);
  }
  FUN_0046955c(param_1,param_2);
  FUN_004673cc(param_1,0xb02c,param_2,0);
  FUN_004692c0(param_1);
  return;
}

