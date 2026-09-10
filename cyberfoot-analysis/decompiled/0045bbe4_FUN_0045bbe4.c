// Address: 0045bbe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bbe4(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_0045bba8(param_1);
  if (param_2 != cVar1) {
    if (param_2 == '\0') {
      param_1[0x14] = DAT_0045bc24 | param_1[0x14];
    }
    else {
      param_1[0x14] = ~DAT_0045bc24 & param_1[0x14];
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
  return;
}

