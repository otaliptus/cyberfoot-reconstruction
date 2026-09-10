// Address: 004266b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004266b8(byte *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  for (; ((0 < iVar1 && ((byte)(*param_1 - 0x30) < 0x37)) && ((byte)(param_1[1] - 0x30) < 0x37));
      param_1 = param_1 + 2) {
    *param_2 = (char)*(undefined2 *)((int)&PTR_s_False_00662584 + (uint)*param_1 * 2) * '\x10' +
               (char)*(undefined2 *)((int)&PTR_s_False_00662584 + (uint)param_1[1] * 2);
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  }
  return param_3 - iVar1;
}

