// Address: 00422ae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00422ae4(undefined4 param_1)

{
  char cVar1;
  int local_c;
  char local_8 [2];
  short local_6;
  
  cVar1 = FUN_004239d4(param_1);
  if (cVar1 == '\x02') {
    FUN_00421f98(param_1,local_8,1);
    local_c = (int)local_8[0];
  }
  else if (cVar1 == '\x03') {
    FUN_00421f98(param_1,&local_6,2);
    local_c = (int)local_6;
  }
  else if (cVar1 == '\x04') {
    FUN_00421f98(param_1,&local_c,4);
  }
  else {
    FUN_00421a70();
  }
  return local_c;
}

