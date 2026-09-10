// Address: 004f3b2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f3b2c(int param_1,char param_2)

{
  undefined2 extraout_var;
  
  *(char *)(param_1 + 0x27a) = param_2;
  if (param_2 == '\0') {
    FUN_0045c018(param_1,0);
    FUN_00466414(param_1,0);
  }
  else if (param_2 == '\x01') {
    FUN_0045c018(param_1,1);
    FUN_00466414(param_1,CONCAT22(extraout_var,0xfffe));
  }
  FUN_004ef3b4(param_1);
  return;
}

