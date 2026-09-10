// Address: 0042d2e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042d2e8(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_0042d394(param_1,CONCAT22(extraout_var,3),PTR_LAB_00429238);
  FUN_0042d394(param_1,CONCAT22(extraout_var_00,0xe),PTR_LAB_00429238);
  FUN_0042d394(param_1,CONCAT22(extraout_var_01,2),PTR_PTR_00429378);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

