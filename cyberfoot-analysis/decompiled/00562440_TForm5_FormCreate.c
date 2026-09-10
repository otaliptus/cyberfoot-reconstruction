// Address: 00562440
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm5_FormCreate(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar3 = 0xb;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_00562816;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  iVar3 = 5;
  puVar4 = (undefined4 *)PTR_DAT_0066b084;
  do {
    local_28 = (char *)0x56247a;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x330),*puVar4);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_28 = (char *)0x56248d;
  FUN_00642c50(0x98,&local_8);
  local_28 = (char *)0x56249b;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_8);
  local_28 = (char *)0x5624a8;
  FUN_00642c50(0x9a,&local_c);
  local_28 = (char *)0x5624b6;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_c);
  local_28 = (char *)0x5624c3;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),0);
  local_28 = (char *)0x5624d0;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),0);
  local_28 = (char *)0x5624db;
  iVar3 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
  if (iVar3 == 0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)PTR_DAT_0066b3a4;
    do {
      local_28 = "F";
      local_2c = 0x5624fb;
      FUN_00409dd8(iVar3 + 1,&stack0xffffffe8);
      local_30 = &DAT_00562838;
      local_34 = 0x562510;
      local_2c = unaff_EDI;
      FUN_00404c64(&stack0xffffffec,3);
      local_28 = (char *)0x56251b;
      FUN_004051d4(&stack0xfffffff0,unaff_ESI);
      local_28 = (char *)0x562525;
      FUN_0040526c(&stack0xfffffff0,*puVar4);
      local_28 = (char *)0x562533;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),unaff_EBX);
      local_28 = (char *)0x56253d;
      FUN_00409dd8(iVar3,&local_20);
      local_28 = (char *)0x56254a;
      FUN_00404bac(&local_20,&DAT_00562838);
      local_28 = (char *)0x562555;
      FUN_004051d4(&local_1c,local_20);
      local_28 = (char *)0x56255f;
      FUN_0040526c(&local_1c,*puVar4);
      local_28 = (char *)0x56256d;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),local_1c);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 4);
  }
  else {
    iVar3 = 4;
    puVar4 = (undefined4 *)(PTR_DAT_0066b3a4 + 0x10);
    do {
      local_28 = "F";
      local_2c = 0x56259f;
      FUN_00409dd8(iVar3 + -3,&local_2c);
      local_30 = &DAT_00562838;
      local_34 = 0x5625b4;
      FUN_00404c64(&local_28,3);
      pcVar1 = local_28;
      local_28 = (char *)0x5625bf;
      FUN_004051d4(&local_24,pcVar1);
      local_28 = (char *)0x5625c9;
      FUN_0040526c(&local_24,*puVar4);
      local_28 = (char *)0x5625d7;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),local_24);
      local_28 = (char *)0x5625e4;
      FUN_00409dd8(iVar3 + -4,&local_34);
      local_28 = (char *)0x5625f1;
      FUN_00404bac(&local_34,&DAT_00562838);
      local_28 = (char *)0x5625fc;
      FUN_004051d4(&local_30,local_34);
      local_28 = (char *)0x562606;
      FUN_0040526c(&local_30,*puVar4);
      local_28 = (char *)0x562614;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),local_30);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0xe);
  }
  local_28 = (char *)0x56262e;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x338),0);
  local_28 = (char *)0x56263e;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),1);
  local_28 = (char *)0x56264b;
  FUN_00642c50(0x2f0,&local_38);
  local_28 = (char *)0x562659;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_38);
  local_28 = (char *)0x562666;
  FUN_00642c50(0x81,&local_3c);
  local_28 = (char *)0x562674;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_3c);
  local_28 = (char *)0x562681;
  FUN_00642c50(0x2ec,&local_40);
  local_28 = (char *)0x56268f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_40);
  local_28 = (char *)0x56269c;
  FUN_00642c50(0x2f9,&local_44);
  local_28 = (char *)0x5626aa;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_44);
  local_28 = (char *)0x5626b7;
  FUN_00642c50(0x2fb,&local_48);
  local_28 = (char *)0x5626c5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_48);
  local_28 = (char *)0x5626d2;
  FUN_00642c50(0x2fa,&local_4c);
  local_28 = (char *)0x5626e0;
  FUN_004e1414(*(undefined4 *)(param_1 + 800),local_4c);
  local_28 = (char *)0x5626ed;
  FUN_00642c50(0x2fa,&local_50);
  local_28 = (char *)0x5626fb;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_50);
  iVar3 = 0;
  puVar4 = (undefined4 *)(PTR_DAT_0066b2bc + 4);
  do {
    local_28 = "<img src=\"idx:";
    local_2c = 0x562715;
    FUN_00409dd8(*puVar4,&local_5c);
    local_2c = local_5c;
    local_30 = &LAB_0056285c;
    local_34 = 0x56272a;
    FUN_00404c64(&local_58,3);
    local_28 = (char *)0x562735;
    FUN_004051d4(&local_54,local_58);
    local_28 = (char *)0x562740;
    FUN_0040526c(&local_54,puVar4[-1]);
    local_28 = (char *)0x56274e;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_54);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar3 != 0xca);
  local_28 = (char *)0x562770;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),0);
  if (*(int *)PTR_DAT_0066b52c < 1) {
    local_28 = (char *)0x56279f;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),0x1d);
  }
  else {
    local_28 = (char *)0x56278d;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),*(undefined4 *)PTR_DAT_0066b52c);
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0056281d;
  local_20 = (undefined1 *)0x5627b9;
  FUN_004048f8(&local_5c,2,puVar2);
  local_20 = (undefined1 *)0x5627c6;
  FUN_00405008(&local_54,8);
  local_20 = (undefined1 *)0x5627ce;
  FUN_004048d4(&local_34);
  local_20 = (undefined1 *)0x5627d6;
  FUN_00404ff0(&local_30);
  local_20 = (undefined1 *)0x5627e3;
  FUN_004048f8(&local_2c,2);
  local_20 = (undefined1 *)0x5627eb;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x5627f3;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x5627fb;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x562808;
  FUN_004048f8(&stack0xffffffe8,2);
  local_20 = (undefined1 *)0x562815;
  FUN_00405008(&stack0xfffffff0,3);
  return;
}

