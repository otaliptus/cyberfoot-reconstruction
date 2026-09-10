// Address: 00421780
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421780(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x421793;
  (**(code **)(*DAT_0066c84c + 0x14))();
  puStack_24 = &LAB_00421919;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x4217ab;
  puStack_20 = &stack0xfffffffc;
  iVar2 = FUN_0041e41c(DAT_0066c868);
  puStack_30 = &LAB_004218fa;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (*(int *)(iVar2 + 8) < 1) {
    *in_FS_OFFSET = uStack_34;
    puStack_2c = &LAB_00421901;
    puStack_30 = (undefined1 *)0x4218f9;
    FUN_0041e480(DAT_0066c868,uStack_34,&stack0xfffffffc);
    return;
  }
  puStack_38 = (undefined1 *)0x4217d1;
  puStack_2c = &stack0xfffffffc;
  FUN_00403a54(PTR_PTR_0041b73c,1);
  puStack_3c = &LAB_004218db;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x4217ee;
  puStack_38 = &stack0xfffffffc;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  puStack_48 = &LAB_00421889;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  iVar8 = 0;
  puStack_44 = &stack0xfffffffc;
  do {
    while( true ) {
      puVar1 = puStack_44;
      if (*(int *)(iVar2 + 8) <= iVar8) {
        *in_FS_OFFSET = uStack_4c;
        puStack_44 = &LAB_00421890;
        puStack_48 = (undefined1 *)0x421888;
        FUN_00403a84(uVar3,uStack_4c,puVar1);
        return;
      }
      puVar4 = (undefined4 *)FUN_0041e01c(iVar2,iVar8);
      iVar5 = FUN_0041d9dc(puVar4[4]);
      if (iVar5 == 0) break;
LAB_0042182e:
      if (iVar5 != 0) {
        uVar7 = FUN_00421638(iVar5,puVar4[5]);
        (**(code **)*puVar4)(puVar4,uVar7);
      }
      FUN_00421700(puVar4[1]);
      FUN_0041df0c(iVar2,iVar8,&stack0xfffffffc);
      FUN_00403a84(puVar4);
    }
    iVar6 = FUN_00419ee8(puVar4[1],puVar4[3]);
    if (iVar6 != 0) goto LAB_0042182e;
    FUN_00421738(puVar4[1]);
    iVar8 = iVar8 + 1;
  } while( true );
}

