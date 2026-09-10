// Address: 00522960
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00522960(char *param_1,char param_2,int param_3)

{
  undefined1 in_ZF;
  
  do {
    if (param_3 == 0) {
      return (bool)in_ZF;
    }
    param_3 = param_3 + -1;
    in_ZF = param_2 == *param_1;
    param_1 = param_1 + 1;
  } while (!(bool)in_ZF);
  return (bool)in_ZF;
}

