// Address: 005fbf8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm38_Timer2Timer(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_005fc163;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x334),0);
  DAT_006d4078 = DAT_006d4078 + 1;
  iVar3 = FUN_004032c8(3);
  if ((iVar3 == 0) || (iVar3 == 1)) {
    DAT_006d4080 = DAT_006d4080 + 1;
    FUN_00409dd8(DAT_006d4080,&local_c);
    FUN_004051d4(&local_8,local_c);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_8);
    FUN_00642c50(0x1e5,&local_14);
    FUN_00404b6c(&local_10,local_14);
    uVar2 = local_10;
    iVar3 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x22c),DAT_006d4070 + -1);
    (**(code **)(**(int **)(iVar3 + 8) + 0x20))(*(int **)(iVar3 + 8),0,uVar2);
    if ((DAT_006d4070 < 6) && ((5 - DAT_006d4070) + DAT_006d407c < DAT_006d4080)) {
      FUN_005fbbdc(param_1,0);
      goto LAB_005fc128;
    }
  }
  else {
    FUN_00642c50(0x1e6,&local_1c);
    FUN_00404b6c(&local_18,local_1c);
    uVar2 = local_18;
    iVar3 = FUN_0044e8f4(*(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x22c),DAT_006d4070 + -1);
    (**(code **)(**(int **)(iVar3 + 8) + 0x20))(*(int **)(iVar3 + 8),0,uVar2);
  }
  if (5 < DAT_006d4070) {
    if (DAT_006d4080 < DAT_006d407c) {
      FUN_005fbbdc(param_1,1);
      goto LAB_005fc128;
    }
    if (DAT_006d407c < DAT_006d4080) {
      FUN_005fbbdc(param_1,0);
      goto LAB_005fc128;
    }
  }
  if ((DAT_006d4070 < 6) && ((5 - DAT_006d4070) + DAT_006d4080 < DAT_006d407c)) {
    FUN_005fbbdc(param_1,1);
  }
  else {
    FUN_0043b234(*(undefined4 *)(param_1 + 0x338),1);
  }
LAB_005fc128:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005fc16a;
  puStack_2c = (undefined1 *)0x5fc13d;
  FUN_00404ff0(&local_1c,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x5fc145;
  FUN_004048d4(&local_18);
  puStack_2c = (undefined1 *)0x5fc14d;
  FUN_00404ff0(&local_14);
  puStack_2c = (undefined1 *)0x5fc15a;
  FUN_004048f8(&local_10,2);
  puStack_2c = (undefined1 *)0x5fc162;
  FUN_00404ff0(&local_8);
  return;
}

