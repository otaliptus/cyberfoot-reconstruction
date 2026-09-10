// Address: 00563e2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm6_FormCreate(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
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
  iVar3 = 6;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_20 = &LAB_00564062;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (char *)0x563e5b;
  FUN_00642c50(0x2f1,&local_8);
  local_28 = (char *)0x563e69;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_8);
  local_28 = (char *)0x563e76;
  FUN_00642c50(0x81,&local_c);
  local_28 = (char *)0x563e84;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_c);
  local_28 = (char *)0x563e91;
  FUN_00642c50(0x2ec,&stack0xfffffff0);
  local_28 = (char *)0x563e9f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_EBX);
  local_28 = (char *)0x563eac;
  FUN_00642c50(0x2f9,&stack0xffffffec);
  local_28 = (char *)0x563eba;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),unaff_ESI);
  local_28 = (char *)0x563ec7;
  FUN_00642c50(0x2fb,&stack0xffffffe8);
  local_28 = (char *)0x563ed5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),unaff_EDI);
  local_28 = (char *)0x563ee2;
  FUN_00642c50(0x2fa,&local_1c);
  local_28 = (char *)0x563ef0;
  FUN_004e1414(*(undefined4 *)(param_1 + 800),local_1c);
  local_28 = (char *)0x563efd;
  FUN_00642c50(0x2fa,&local_20);
  local_28 = (char *)0x563f0b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_20);
  iVar3 = 5;
  puVar4 = (undefined4 *)PTR_DAT_0066b084;
  do {
    local_28 = (char *)0x563f23;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x330),*puVar4);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_28 = (char *)0x563f36;
  FUN_00642c50(0x98,&local_24);
  local_28 = (char *)0x563f44;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),local_24);
  local_28 = (char *)0x563f51;
  FUN_00642c50(0x9a,&local_28);
  pcVar1 = local_28;
  local_28 = (char *)0x563f5f;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x334),pcVar1);
  local_28 = (char *)0x563f6c;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),0);
  local_28 = (char *)0x563f79;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),0);
  iVar3 = 4;
  puVar4 = (undefined4 *)PTR_DAT_0066b3a4;
  do {
    local_28 = (char *)0x563f91;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),*puVar4);
    local_28 = (char *)0x563f9e;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),*puVar4);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_28 = (char *)0x563fb1;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),0);
  local_28 = (char *)0x563fbe;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),0);
  local_28 = (char *)0x563fce;
  FUN_00449ff0(*(undefined4 *)(param_1 + 0x304),0x10);
  local_28 = (char *)0x563fde;
  FUN_0044a00c(*(undefined4 *)(param_1 + 0x304),0x2a);
  iVar3 = 0xca;
  puVar4 = (undefined4 *)(PTR_DAT_0066b2bc + 4);
  do {
    local_28 = "<img src=\"idx:";
    local_2c = 0x563ffb;
    FUN_00409dd8(*puVar4,&local_34);
    local_2c = local_34;
    local_30 = &DAT_00564090;
    local_34 = 0x564010;
    FUN_00404c64(&local_30,3);
    local_28 = (char *)0x56401b;
    FUN_004051d4(&local_2c,local_30);
    local_28 = (char *)0x564026;
    FUN_0040526c(&local_2c,puVar4[-1]);
    local_28 = (char *)0x564034;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x338),local_2c);
    puVar2 = local_1c;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00564069;
  local_20 = (undefined1 *)0x564054;
  FUN_004048f8(&local_34,2,puVar2);
  local_20 = (undefined1 *)0x564061;
  FUN_00405008(&local_2c,10);
  return;
}

