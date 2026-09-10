// Address: 0063e934
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_barraMouseDown
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  uVar2 = (undefined2)((uint)param_2 >> 0x10);
  if ((((0x1d < param_5) && (param_5 < 0x47)) && (7 < param_4)) && (param_4 < 0x30)) {
    puStack_10 = (undefined1 *)0x63e96c;
    (**(code **)(**(int **)(param_1 + 800) + 0x40))(*(int **)(param_1 + 800),4,5);
    uVar2 = extraout_var;
  }
  if (((0x53 < param_5) && (param_5 < 0x7f)) && ((7 < param_4 && (param_4 < 0x30)))) {
    *(undefined4 *)PTR_DAT_0066ae40 = *(undefined4 *)(PTR_DAT_0066ac78 + 8);
    puStack_10 = (undefined1 *)0x63e9ac;
    (**(code **)(**(int **)(param_1 + 0x32c) + 0x40))(*(int **)(param_1 + 0x32c),0x34,5);
    uVar2 = extraout_var_00;
  }
  if (((0x91 < param_5) && (param_5 < 0xbf)) && ((7 < param_4 && (param_4 < 0x30)))) {
    puStack_10 = (undefined1 *)0x63e9e2;
    (**(code **)(**(int **)(param_1 + 0x310) + 0x40))(*(int **)(param_1 + 0x310),0x60,5);
    uVar2 = extraout_var_01;
  }
  if ((((0xcf < param_5) && (param_5 < 0xf4)) && (7 < param_4)) && (param_4 < 0x30)) {
    *(undefined4 *)PTR_DAT_0066ad88 = 0xffffffff;
    puStack_10 = (undefined1 *)0x63ea1f;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,CONCAT22(uVar2,0xfff5));
    puStack_14 = &LAB_0063ea70;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005add64,PTR_DAT_0066adf0);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x63ea77;
    puStack_14 = (undefined1 *)0x63ea60;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
    puStack_14 = (undefined1 *)0x63ea6f;
    (**(code **)(**(int **)PTR_DAT_0066adf0 + 0xec))();
    return;
  }
  if (((0x103 < param_5) && (param_5 < 0x12a)) && ((7 < param_4 && (param_4 < 0x30)))) {
    *(undefined4 *)PTR_DAT_0066b76c = *(undefined4 *)(PTR_DAT_0066ac78 + 8);
    puStack_10 = (undefined1 *)0x63eabd;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00585d9c,PTR_DAT_0066b1b4);
    puStack_10 = (undefined1 *)0x63eacc;
    (**(code **)(**(int **)PTR_DAT_0066b1b4 + 0xec))();
  }
  if (((0x138 < param_5) && (param_5 < 0x16c)) && ((7 < param_4 && (param_4 < 0x30)))) {
    puStack_10 = (undefined1 *)0x63eb02;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0057dcc0,PTR_DAT_0066aeec);
    puStack_10 = (undefined1 *)0x63eb11;
    (**(code **)(**(int **)PTR_DAT_0066aeec + 0xec))();
  }
  if ((((0x17d < param_5) && (param_5 < 0x1a6)) && (7 < param_4)) && (param_4 < 0x30)) {
    *(undefined4 *)PTR_DAT_0066b2b4 = *(undefined4 *)(PTR_DAT_0066ac78 + 8);
    puStack_10 = (undefined1 *)0x63eb57;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
    puStack_14 = &LAB_0063eb99;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00596c58,PTR_DAT_0066ad70);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = &DAT_0063eba0;
    puStack_14 = (undefined1 *)0x63eb98;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
    return;
  }
  if (((0x1b7 < param_5) && (param_5 < 0x1d9)) && ((7 < param_4 && (param_4 < 0x30)))) {
    puStack_10 = (undefined1 *)0x63ebe5;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00594738,PTR_DAT_0066b7bc);
    puStack_10 = (undefined1 *)0x63ebf4;
    (**(code **)(**(int **)PTR_DAT_0066b7bc + 0xec))();
  }
  if (((0x1ef < param_5) && (param_5 < 0x215)) && ((7 < param_4 && (param_4 < 0x30)))) {
    puStack_10 = (undefined1 *)0x63ec2a;
    (**(code **)(**(int **)(param_1 + 0x324) + 0x40))(*(int **)(param_1 + 0x324),0x163,5);
  }
  if ((((0x226 < param_5) && (param_5 < 0x24c)) && (7 < param_4)) && (param_4 < 0x30)) {
    puStack_10 = (undefined1 *)0x63ec60;
    (**(code **)(**(int **)(param_1 + 0x328) + 0x40))(*(int **)(param_1 + 0x328),0x1ca,5);
  }
  return;
}

