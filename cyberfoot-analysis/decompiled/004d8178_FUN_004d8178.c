// Address: 004d8178
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d8178(IID *param_1)

{
  int *piVar1;
  char cVar2;
  HRESULT HVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int *in_FS_OFFSET;
  undefined1 uVar6;
  undefined1 uVar7;
  int **ppiStackY_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  int local_2c;
  IID *pIVar8;
  undefined1 *puVar9;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  LPOLESTR local_c;
  undefined4 uStack_8;
  
  local_18 = &stack0xfffffffc;
  iVar5 = 6;
  do {
    uStack_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_004d832a;
  local_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_2c = 0x4d81a3;
  pIVar8 = param_1;
  HVar3 = ProgIDFromCLSID(param_1,&local_c);
  uStack_8 = CONCAT13(HVar3 == 0,(undefined3)uStack_8);
  if (HVar3 == 0) {
    puVar9 = &stack0xffffffec;
    FUN_004ac7bc(param_1,&stack0xffffffdc);
    local_1c = (undefined1 *)CONCAT31(local_1c._1_3_,0xb);
    local_20 = puVar9;
    FUN_0040b460(L"\\SOFTWARE\\Classes\\CLSID\\%s",&local_20,0);
    uVar4 = FUN_00441830(PTR_LAB_0044172c,1);
    pIVar8 = (IID *)&LAB_004d82e3;
    local_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_2c;
    local_30 = 0x4d8204;
    FUN_004418d0(uVar4,0x80000002);
    local_30 = 0x4d820f;
    FUN_00404b6c(&stack0xffffffd8,unaff_EBX);
    local_30 = 0x4d821a;
    cVar2 = FUN_00441b38(uVar4,pIVar8);
    uStack_8 = CONCAT13(cVar2,(undefined3)uStack_8);
    if (cVar2 == '\0') {
      local_30 = 0x4d8228;
      FUN_004042fc();
    }
    else {
      local_30 = *(int *)PTR_DAT_0066b4f4;
      local_34 = &local_2c;
      uVar6 = 1;
      local_38 = 0x4d8248;
      FUN_00441fc0(uVar4,"InProcServer32");
      local_38 = 0x4d8253;
      FUN_004051d4(&local_18,local_2c);
      local_38 = 0x4d8263;
      FUN_004051d4(&local_30,*(undefined4 *)PTR_DAT_0066b4f4);
      local_38 = 0x4d826e;
      FUN_00405378(local_18,local_30);
      uVar7 = 0;
      if ((bool)uVar6) {
        local_38 = *(undefined4 *)PTR_DAT_0066b4f4;
        ppiStackY_3c = &local_34;
        uVar7 = 1;
        FUN_00441fc0(uVar4,"InProcServer");
        FUN_004051d4(&local_18,local_34);
      }
      FUN_004051d4(&local_38,*(undefined4 *)PTR_DAT_0066b4f4);
      FUN_00405378(local_18,local_38);
      uStack_8 = CONCAT13(!(bool)uVar7,(undefined3)uStack_8);
      if (!(bool)uVar7) {
        uVar7 = FUN_004d3780(local_18);
        piVar1 = local_34;
        uStack_8 = CONCAT13(uVar7,(undefined3)uStack_8);
        *in_FS_OFFSET = (int)ppiStackY_3c;
        local_34 = (int *)0x4d82ea;
        local_38 = 0x4d82e2;
        FUN_00403a84(uVar4,ppiStackY_3c,piVar1);
        return;
      }
      FUN_004042fc();
    }
  }
  *in_FS_OFFSET = local_30;
  local_2c = 0x4d82ff;
  FUN_00404ff0(&local_38,local_30,pIVar8);
  local_2c = 0x4d8307;
  FUN_004048d4(&local_34);
  local_2c = 0x4d830f;
  FUN_00404ff0(&local_30);
  local_2c = 0x4d831c;
  FUN_004048f8(&local_2c,3);
  local_2c = 0x4d8329;
  FUN_00405008(&local_18,2);
  return;
}

