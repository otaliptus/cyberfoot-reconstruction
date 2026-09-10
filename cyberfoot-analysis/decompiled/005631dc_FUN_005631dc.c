// Address: 005631dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005631dc(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 5;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_005633dd;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined *)0x56320c;
  (**(code **)(**(int **)(param_1 + 0x338) + 0xd8))();
  local_28 = (undefined *)0x56321a;
  (**(code **)(**(int **)(param_1 + 0x340) + 0xd8))();
  local_28 = (undefined *)0x563225;
  iVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
  if (iVar3 == 0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)PTR_DAT_0066b3a4;
    do {
      local_28 = &DAT_005633f4;
      local_2c = 0x563245;
      FUN_00409dd8(iVar3 + 1,&stack0xfffffff0);
      local_2c = unaff_EBX;
      FUN_00404c64(&local_c,3);
      local_28 = (undefined *)0x563265;
      FUN_004051d4(&local_8,local_c);
      local_28 = (undefined *)0x56326f;
      FUN_0040526c(&local_8,*puVar4);
      local_28 = (undefined *)0x56327d;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),local_8);
      local_28 = (undefined *)0x563287;
      FUN_00409dd8(iVar3,&stack0xffffffe8);
      local_28 = (undefined *)0x563294;
      FUN_00404bac(&stack0xffffffe8,&DAT_00563400);
      local_28 = (undefined *)0x56329f;
      FUN_004051d4(&stack0xffffffec,unaff_EDI);
      local_28 = (undefined *)0x5632a9;
      FUN_0040526c(&stack0xffffffec,*puVar4);
      local_28 = (undefined *)0x5632b7;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),unaff_ESI);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 4);
  }
  else {
    iVar3 = 4;
    puVar4 = (undefined4 *)(PTR_DAT_0066b3a4 + 0x10);
    do {
      local_28 = &DAT_005633f4;
      local_2c = 0x5632e9;
      FUN_00409dd8(iVar3 + -3,&local_24);
      local_2c = local_24;
      FUN_00404c64(&local_20,3);
      local_28 = (undefined *)0x563309;
      FUN_004051d4(&local_1c,local_20);
      local_28 = (undefined *)0x563313;
      FUN_0040526c(&local_1c,*puVar4);
      local_28 = (undefined *)0x563321;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),local_1c);
      local_28 = (undefined *)0x56332e;
      FUN_00409dd8(iVar3 + -4,&local_2c);
      local_28 = (undefined *)0x56333b;
      FUN_00404bac(&local_2c,&DAT_00563400);
      local_28 = (undefined *)0x563346;
      FUN_004051d4(&local_28,local_2c);
      local_28 = (undefined *)0x563350;
      FUN_0040526c(&local_28,*puVar4);
      puVar1 = local_28;
      local_28 = (undefined *)0x56335e;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),puVar1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0xe);
  }
  local_28 = (undefined *)0x563378;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x338),0);
  local_28 = (undefined *)0x563385;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),0);
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005633e4;
  local_20 = (undefined1 *)0x56339a;
  FUN_004048d4(&local_2c,local_24,puVar2);
  local_20 = (undefined1 *)0x5633a2;
  FUN_00404ff0(&local_28);
  local_20 = (undefined1 *)0x5633af;
  FUN_004048f8(&local_24,2);
  local_20 = (undefined1 *)0x5633b7;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x5633bf;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x5633c7;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x5633d4;
  FUN_004048f8(&stack0xfffffff0,2);
  local_20 = (undefined1 *)0x5633dc;
  FUN_00404ff0(&local_8);
  return;
}

