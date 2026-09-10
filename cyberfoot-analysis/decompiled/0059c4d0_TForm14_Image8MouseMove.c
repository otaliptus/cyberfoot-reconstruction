// Address: 0059c4d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_Image8MouseMove
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  puStack_30 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_0059c678;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  bVar1 = false;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((((5 < param_5) && (puVar2 = &stack0xfffffffc, param_5 < 0x2c)) &&
      (puVar2 = &stack0xfffffffc, -1 < param_4)) && (puVar2 = &stack0xfffffffc, param_4 < 0x29)) {
    bVar1 = true;
    FUN_00642c50(0x3e1,&local_10);
    FUN_00404b6c(&local_c,local_10);
    puVar2 = puStack_30;
    uVar3 = extraout_var;
  }
  puStack_30 = puVar2;
  if (((0x2f < param_5) && (param_5 < 0x5b)) && ((-1 < param_4 && (param_4 < 0x29)))) {
    bVar1 = true;
    FUN_00642c50(0x130,&local_14);
    FUN_00404b6c(&local_c,local_14);
    uVar3 = extraout_var_00;
  }
  if (((0x60 < param_5) && (param_5 < 0x87)) && ((-1 < param_4 && (param_4 < 0x29)))) {
    bVar1 = true;
    FUN_00642c50(0x132,&local_18);
    FUN_00404b6c(&local_c,local_18);
    uVar3 = extraout_var_01;
  }
  if ((((0x8e < param_5) && (param_5 < 0xb1)) && (-1 < param_4)) && (param_4 < 0x29)) {
    bVar1 = true;
    FUN_00642c50(0x12f,&local_1c);
    FUN_00404b6c(&local_c,local_1c);
    uVar3 = extraout_var_02;
  }
  if (((0xb5 < param_5) && (param_5 < 0xdb)) && ((-1 < param_4 && (param_4 < 0x29)))) {
    bVar1 = true;
    FUN_00642c50(0x131,&local_20);
    FUN_00404b6c(&local_c,local_20);
    uVar3 = extraout_var_03;
  }
  if (bVar1) {
    FUN_00466414(*(undefined4 *)(local_8 + 0x394),CONCAT22(uVar3,0xffeb));
    if (*PTR_DAT_0066b700 == '\0') {
      FUN_00404928(*(int *)(local_8 + 0x394) + 0x80,local_c);
      FUN_00466358(*(undefined4 *)(local_8 + 0x394),1);
    }
  }
  else {
    FUN_00466358(*(undefined4 *)(local_8 + 0x394),0);
    FUN_00466414(*(undefined4 *)(local_8 + 0x394),0);
  }
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0059c67f;
  puStack_34 = (undefined1 *)0x59c66f;
  FUN_00405008(&local_20,5,puVar2);
  puStack_34 = (undefined1 *)0x59c677;
  FUN_004048d4(&local_c);
  return;
}

