// Address: 004bc5ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bc5ec(undefined4 param_1,undefined2 param_2,undefined2 param_3,double *param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  char cVar1;
  double local_14;
  undefined2 local_6;
  
  local_6 = param_3;
  cVar1 = FUN_0040c144(param_1,param_2,param_3,param_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_0040bffc(CONCAT22((short)((uint)&local_14 >> 0x10),param_8),param_7,param_6,
                         &local_14,param_5);
    if (cVar1 != '\0') {
      *param_4 = *param_4 + local_14;
    }
  }
  return;
}

