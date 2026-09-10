// Address: 00648a20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00648a20(void)

{
  undefined1 *puVar1;
  char cVar2;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined *puVar3;
  undefined *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined *puStack_34;
  undefined *puStack_30;
  char *pcStack_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = (undefined *)0x4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != (undefined *)0x0);
  local_24 = &LAB_00648c30;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  *(undefined4 *)PTR_DAT_0066b580 = 0;
  pcStack_2c = (char *)0x648a57;
  FUN_0040496c(&local_10,"ntdll06.dat");
  pcStack_2c = (char *)0x648a64;
  FUN_0040496c(&stack0xffffffe8,"blank");
  pcStack_2c = (char *)0x648a6c;
  FUN_00646008(&stack0xffffffec);
  if (unaff_EBX == 0) {
    *(undefined4 *)PTR_DAT_0066b580 = 0;
LAB_00648c15:
    puVar1 = local_20;
    *in_FS_OFFSET = local_28;
    local_20 = &LAB_00648c37;
    local_24 = (undefined1 *)0x648c2f;
    FUN_004048f8(&local_28,7,puVar1);
    return;
  }
  puStack_30 = &DAT_00648c6c;
  puStack_34 = local_10;
  puStack_38 = (undefined1 *)0x648a98;
  FUN_00404c64(&stack0xffffffe4,3);
  pcStack_2c = (char *)0x648aa0;
  cVar2 = FUN_0040a43c(unaff_EDI);
  if (cVar2 == '\0') {
    pcStack_2c = "teams\\escudos\\";
    puStack_34 = &DAT_00648c90;
    puStack_38 = (undefined1 *)0x648abe;
    FUN_00404c64(&local_20,3);
    pcStack_2c = (char *)0x648ac6;
    cVar2 = FUN_0040a43c(local_20);
    if (cVar2 == '\0') {
      *(undefined4 *)PTR_DAT_0066b580 = 0xffffffe8;
      goto LAB_00648c15;
    }
  }
  puStack_30 = &LAB_00648b1e;
  puStack_34 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  puStack_38 = (undefined1 *)0x20;
  puStack_40 = &DAT_00648c6c;
  puVar3 = local_10;
  pcStack_2c = &stack0xfffffffc;
  FUN_00404c64(&local_24,3);
  local_c = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_24,puVar3);
  *in_FS_OFFSET = puStack_40;
  puStack_3c = &LAB_00648bd6;
  puStack_40 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_40;
  puStack_38 = &stack0xfffffffc;
  (**(code **)(*local_c + 0xc))(local_c,&local_8,4);
  (**(code **)(*local_c + 0xc))(local_c,&DAT_006d5318,4);
  puVar1 = puStack_38;
  *in_FS_OFFSET = puStack_40;
  puStack_38 = &DAT_00648bdd;
  puStack_3c = (undefined1 *)0x648bd5;
  FUN_00403a84(local_c,puStack_40,puVar1);
  return;
}

