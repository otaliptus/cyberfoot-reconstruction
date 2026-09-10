// Address: 00423f24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423f24(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = (int *)0x0;
  puStack_2c = &LAB_004240cd;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x423f50;
  FUN_00421afc(*(undefined4 *)(param_4 + -4),10);
  local_c = 0;
  puStack_34 = (undefined1 *)0x423f61;
  local_8 = FUN_00403a54(PTR_PTR_0041c090,1);
  puStack_38 = &LAB_004240a8;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x423f7e;
  puStack_34 = &stack0xfffffffc;
  local_c = FUN_00403a54(PTR_PTR_0041c090,1);
  puStack_40 = (undefined1 *)0x423f94;
  FUN_00421f98(*(undefined4 *)(param_4 + -4),&local_14,4);
  puStack_40 = (undefined1 *)(local_14 >> 0x1f);
  puStack_44 = (undefined1 *)local_14;
  uStack_48 = 0x423fa2;
  FUN_00420958(local_8);
  puStack_40 = (undefined1 *)0x423fb6;
  FUN_00421f98(*(undefined4 *)(param_4 + -4),*(undefined4 *)(local_8 + 4),local_14);
  puStack_40 = (undefined1 *)0x400;
  puStack_44 = (undefined1 *)0x423fca;
  local_10 = FUN_004213b8(PTR_PTR_0041c3e0,1,local_8);
  puStack_44 = &LAB_00424083;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_00423834(local_10,&local_1c);
  FUN_00421f98(local_10,&local_14,4);
  FUN_00420958(local_c);
  FUN_00421f98(local_10,*(undefined4 *)(local_c + 4),local_14);
  cVar2 = FUN_00418fdc(local_1c,&local_18);
  if (cVar2 != '\0') {
    uVar3 = FUN_00406880(&local_20);
    cVar2 = FUN_0040fe94(local_18,&DAT_004240dc,uVar3);
    if (cVar2 != '\0') goto LAB_00424056;
  }
  FUN_0040e42c(PTR_DAT_0041b3ac,1,PTR_PTR_0066b614);
  FUN_00404250();
LAB_00424056:
  *param_1 = *(undefined2 *)(local_18 + 4);
  (**(code **)(*local_20 + 0xc))(local_20,param_1,local_c);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0042408a;
  puStack_44 = (undefined1 *)0x424082;
  FUN_00403a84(local_10,uStack_48,puVar1);
  return;
}

