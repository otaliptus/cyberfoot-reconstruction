// Address: 00422ee0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422ee0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  pcVar2 = (code *)FUN_0041d884(*(undefined4 *)*param_2);
  if ((pcVar2 != (code *)0x0) && (cVar1 = (*pcVar2)(param_3,&local_c), cVar1 != '\0')) {
    FUN_00419f5c(local_8,param_2,local_c);
    return;
  }
  FUN_00421a70();
  return;
}

