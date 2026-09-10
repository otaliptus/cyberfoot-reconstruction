// Address: 0050a14c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a14c(int param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00509018);
  if (cVar1 == '\0') {
    FUN_0041e66c(param_1,param_2);
  }
  else {
    FUN_0050a440(param_1,*(undefined1 *)(param_2 + 0x30));
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    FUN_0050a470(param_1,*(undefined4 *)(param_2 + 0x34));
    FUN_0050a490(param_1,CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x3e)));
    FUN_0050a4a0(param_1,*(undefined4 *)(param_2 + 0x40));
    FUN_0050a4b4(param_1,*(undefined1 *)(param_2 + 0x4c));
    FUN_0050a4d4(param_1,*(undefined4 *)(param_2 + 0x58));
    (**(code **)(**(int **)(param_1 + 0x5c) + 8))
              (*(int **)(param_1 + 0x5c),*(undefined4 *)(param_2 + 0x5c));
    (**(code **)(**(int **)(param_1 + 0x60) + 8))
              (*(int **)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x60));
    FUN_0050a544(param_1,*(undefined4 *)(param_2 + 0x6c));
    FUN_0050a564(param_1,*(undefined4 *)(param_2 + 0x70));
    FUN_0050a58c(param_1,CONCAT22(extraout_var_00,*(undefined2 *)(param_2 + 0x7c)));
    FUN_0050a648(param_1,*(undefined1 *)(param_2 + 0x7f));
    FUN_0050a690(param_1,*(undefined4 *)(param_2 + 0x88));
    (**(code **)(**(int **)(param_1 + 0x90) + 8))
              (*(int **)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x90));
    FUN_0050a760(param_1,*(undefined1 *)(param_2 + 0x99));
    FUN_0050a7dc(param_1,*(undefined1 *)(param_2 + 0x9a));
    FUN_0050a7f0(param_1,*(undefined1 *)(param_2 + 0xa8));
    FUN_0050a804(param_1,*(undefined1 *)(param_2 + 0xa9));
    FUN_0050a850(param_1,*(undefined4 *)(param_2 + 0xb0));
    FUN_0050a884(param_1,*(undefined1 *)(param_2 + 0xb4));
  }
  return;
}

