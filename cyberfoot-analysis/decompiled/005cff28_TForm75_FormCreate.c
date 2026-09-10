// Address: 005cff28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm75_FormCreate(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uVar6;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005d0414;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar1 = &stack0xfffffffc;
  if (*PTR_DAT_0066b700 != '\0') {
    FUN_00466358(*(undefined4 *)(param_1 + 0x32c),0);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  FUN_00642c50(0x5d,&local_8);
  FUN_004dc12c(*(undefined4 *)(param_1 + 0x398),local_8);
  FUN_00642c50(0x5e,&local_c);
  FUN_004dc12c(*(undefined4 *)(param_1 + 0x390),local_c);
  FUN_00642c50(0x60,&stack0xfffffff0);
  FUN_004dc12c(*(undefined4 *)(param_1 + 0x388),unaff_EBX);
  FUN_00642c50(0x43,&stack0xffffffec);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x37c),unaff_ESI);
  FUN_00642c50(0x44,&stack0xffffffe8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x368),unaff_EDI);
  FUN_00642c50(0x69,&local_1c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_1c);
  FUN_00642c50(0x5e,&local_20);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_20);
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(param_1 + 0x338),0x4b);
  }
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(param_1 + 0x354),0xe1);
  }
  FUN_00642c50(0x80,&local_24);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x60),local_24);
  uVar6 = 0x5d007d;
  FUN_00642c50(0x81,&stack0xffffffd8);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x60),uVar6);
  FUN_00642c50(0x82,&local_2c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x60),local_2c);
  FUN_00642c50(0x83,&local_30);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x348) + 0x60),local_30);
  FUN_00642c50(0x84,&local_34);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x34c) + 0x60),local_34);
  FUN_00642c50(0x87,&local_38);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x350) + 0x60),local_38);
  FUN_00642c50(0x88,&local_3c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x354) + 0x60),local_3c);
  FUN_00642c50(0x89,&local_40);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x60),local_40);
  FUN_00642c50(0x8a,&local_44);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x35c) + 0x60),local_44);
  if (7 < *(int *)(PTR_DAT_0066ac78 + 0x88)) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x2f8),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x314),1);
    FUN_00465978(*(undefined4 *)(param_1 + 0x314),0xe);
  }
  *(undefined1 *)(DAT_006d2d30 + 0x22d) = 1;
  local_2c = 0x5d01ab;
  iVar4 = GetSystemMetrics(0);
  if (iVar4 != *(int *)PTR_DAT_0066ad9c) {
    cVar2 = FUN_00653074();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,iVar4,*(undefined4 *)PTR_DAT_0066ad9c);
      FUN_00481860(DAT_006d2d30,1);
      goto LAB_005d022c;
    }
  }
  cVar2 = FUN_00652fb8();
  if (cVar2 == '\0') {
    cVar2 = FUN_0065305c();
    if (cVar2 != '\0') {
      FUN_0046c5b8(param_1,0x96,100);
      FUN_00481860(DAT_006d2d30,1);
    }
  }
  else {
    FUN_0046c5b8(param_1,0x85,100);
    FUN_00481860(DAT_006d2d30,1);
  }
LAB_005d022c:
  iVar4 = FUN_00647b80();
  if (1 < iVar4) {
    uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x32c),&DAT_005d042c);
    FUN_0050a850(uVar6,100);
    uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x32c),&DAT_005d043c);
    FUN_0050a850(uVar6,0x1e);
    uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x32c),"funcaojog");
    FUN_0050a850(uVar6,0x46);
    uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x32c),"energia");
    FUN_0050a850(uVar6,0x50);
    uVar6 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x32c),"habilidades");
    FUN_0050a850(uVar6,0x37);
  }
  if (*PTR_DAT_0066b458 != '\0') {
    FUN_0050a850(*(undefined4 *)(param_1 + 0x354),0x7d);
  }
  DAT_006d2d34 = 1;
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x5fc);
  if (0 < iVar4) {
    iVar5 = 1;
    piVar3 = (int *)(PTR_DAT_0066ac78 + 0x604);
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x215 + *piVar3 * 0x2f8) != '\0') {
        DAT_006d2d34 = iVar5;
        *(int *)(PTR_DAT_0066ac78 + 0x600) = *piVar3;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_005cf0b8(param_1);
  if (*PTR_DAT_0066afb4 == '\0') {
    *(int *)PTR_DAT_0066ad34 = *(int *)PTR_DAT_0066ad34 + 1;
    if ((*(int *)(PTR_DAT_0066ac78 + 0xd0) == 1) && (*(int *)PTR_DAT_0066ad34 == 3)) {
      if (PTR_DAT_0066ac78[0x8c] == '\0') {
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
        (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
      }
      FUN_0064af08();
      *(undefined4 *)PTR_DAT_0066ad34 = 0;
    }
    else if (*(int *)(PTR_DAT_0066ac78 + 0xd0) == 2) {
      if (PTR_DAT_0066ac78[0x8c] == '\0') {
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
        (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
      }
      FUN_0064af08();
      *(undefined4 *)PTR_DAT_0066ad34 = 0;
    }
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005d041b;
  local_20 = (undefined1 *)0x5d0413;
  FUN_00405008(&local_44,0x10,puVar1);
  return;
}

