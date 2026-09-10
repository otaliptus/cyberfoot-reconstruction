// Address: 00420384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420384(int *param_1)

{
  if (param_1[5] != 0) {
    (**(code **)(*param_1 + 0x84))();
    FUN_00405744(param_1[4],PTR_DAT_0041bd7c,param_1[5]);
    param_1[5] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x80))();
  }
  return;
}

