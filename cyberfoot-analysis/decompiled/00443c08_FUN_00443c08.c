// Address: 00443c08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443c08(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_00443d4b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar2 = FUN_00403c10(param_1[4],PTR_PTR_00442554);
  if (cVar2 != '\0') {
    piVar3 = (int *)param_1[8];
    cVar2 = FUN_00403c10(piVar3,PTR_PTR_00462c78);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0xd8))();
    }
    piVar3 = (int *)param_1[4];
    cVar2 = FUN_00403c10(piVar3,PTR_PTR_00442ad4);
    if (cVar2 == '\0') {
      cVar2 = FUN_00403c10(piVar3,PTR_PTR_004426d0);
      if ((cVar2 != '\0') && (local_14 = (**(code **)(*piVar3 + 0x54))(), -1 < local_14 + -1)) {
        iVar5 = 0;
        do {
          uVar4 = FUN_00403c34(param_1[4],PTR_PTR_004426d0);
          cVar2 = FUN_004435d4(uVar4,iVar5,&local_8,&local_10,&local_c);
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x94))(param_1,local_8,local_c,local_10);
          }
          iVar5 = iVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else {
      piVar3 = (int *)FUN_00403c34(piVar3,PTR_PTR_00442ad4);
      local_14 = (**(code **)(*piVar3 + 0x54))();
      if (-1 < local_14 + -1) {
        iVar5 = 0;
        do {
          uVar4 = FUN_00443198(piVar3[0x34],iVar5);
          cVar2 = FUN_00443a50(piVar3,iVar5,uVar4);
          if (cVar2 != '\0') {
            uVar4 = FUN_00443198(piVar3[0x34],iVar5);
            (**(code **)(*param_1 + 0x90))(param_1,uVar4);
          }
          iVar5 = iVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00443d52;
  puStack_28 = (undefined1 *)0x443d4a;
  FUN_004048d4(&local_8,uStack_2c,puVar1);
  return;
}

