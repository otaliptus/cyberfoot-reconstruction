// Address: 0042338c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042338c(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = 0;
  FUN_00404928(param_2,param_1);
  while( true ) {
    cVar1 = FUN_0041da1c(*param_2);
    if (cVar1 != '\0') break;
    iVar2 = iVar2 + 1;
    local_10 = 0xb;
    local_8 = 0;
    local_14 = param_1;
    local_c = iVar2;
    FUN_0040ae64("%s_%d",&local_14,1,param_2);
  }
  return;
}

