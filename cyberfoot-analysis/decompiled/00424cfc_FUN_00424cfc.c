// Address: 00424cfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00424cfc(undefined4 param_1,int param_2)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_00426644(param_1,2);
    FUN_004243ec(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_00426644(param_1,4);
    FUN_004243ec(param_1,&local_8,4);
  }
  else {
    FUN_00426644(param_1,3);
    FUN_004243ec(param_1,&local_8,2);
  }
  return;
}

