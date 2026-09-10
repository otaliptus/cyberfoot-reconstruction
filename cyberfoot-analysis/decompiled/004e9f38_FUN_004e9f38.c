// Address: 004e9f38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e9f38(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  HDC pHVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar10;
  UINT UVar11;
  undefined1 *puVar12;
  UINT UVar13;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [16];
  tagRECT local_14;
  
  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  puStack_3c = &LAB_004ea161;
  puStack_40 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_40;
  FUN_0046de6c(param_1);
  cVar1 = FUN_004e4b0c();
  if (cVar1 == '\0') {
    iVar5 = param_1[0x58];
    FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0xff00000f);
    (**(code **)(*param_1 + 0x44))(param_1,local_24);
    FUN_0042af8c(iVar5,local_24);
    (**(code **)(*param_1 + 0x44))(param_1,&local_14);
    if ((char)param_1[0x5a] == '\0') {
      UVar13 = 0xf;
      UVar11 = 5;
      ptVar10 = &local_14;
      pHVar3 = (HDC)FUN_0042b5a8(param_1[0x58]);
      DrawEdge(pHVar3,ptVar10,UVar11,UVar13);
    }
    else {
      UVar13 = 0xf;
      UVar11 = 10;
      ptVar10 = &local_14;
      pHVar3 = (HDC)FUN_0042b5a8(param_1[0x58]);
      DrawEdge(pHVar3,ptVar10,UVar11,UVar13);
    }
  }
  else {
    uVar8 = 1;
    if ((char)param_1[0x5c] == '\0') {
      if ((char)param_1[0x5a] == '\0') {
        if (*(char *)((int)param_1 + 0x169) == '\0') {
          uVar8 = 1;
        }
        else {
          uVar8 = 2;
        }
      }
      else {
        uVar8 = 3;
      }
      (**(code **)(*param_1 + 0x44))(param_1,local_24,*param_1,uVar8,1,L"button");
      puVar12 = local_24;
      uVar8 = FUN_0042b5a8(param_1[0x58]);
      uVar2 = FUN_0046cae0(param_1[0xc]);
      FUN_004e4b8c(uVar2,uVar8,puVar12);
    }
    else if ((char)param_1[0x5c] == '\x01') {
      if (*(char *)((int)param_1 + 0x169) != '\0') {
        uVar8 = 2;
      }
      if ((char)param_1[0x5a] != '\0') {
        uVar8 = 3;
      }
      (**(code **)(*param_1 + 0x44))(param_1,local_24,*param_1,uVar8,1,L"toolbar");
      puVar12 = local_24;
      uVar8 = FUN_0042b5a8(param_1[0x58]);
      uVar2 = FUN_0046cae0(param_1[0xc]);
      FUN_004e4b8c(uVar2,uVar8,puVar12);
    }
  }
  cVar1 = (**(code **)(*(int *)param_1[0x5b] + 0x1c))();
  if (cVar1 == '\0') {
    uVar4 = (**(code **)(*(int *)param_1[0x5b] + 0x2c))();
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    iVar9 = param_1[0x12] >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((param_1[0x12] & 1U) != 0);
    }
    uVar4 = (**(code **)(*(int *)param_1[0x5b] + 0x20))();
    iVar6 = (int)uVar4 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar4 & 1) != 0);
    }
    iVar7 = param_1[0x13] >> 1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + (uint)((param_1[0x13] & 1U) != 0);
    }
    FUN_0042ae64(param_1[0x58],iVar9 - iVar5,iVar7 - iVar6,param_1[0x5b]);
  }
  (**(code **)(**(int **)(param_1[0x58] + 0xc) + 8))(*(int **)(param_1[0x58] + 0xc),param_1[0x1a]);
  FUN_00466208(param_1,&local_2c);
  FUN_004051d4(&local_28,local_2c);
  uVar8 = 0;
  (**(code **)(*param_1 + 0x44))(param_1,local_24,*param_1,0,local_28);
  FUN_004e63b0(param_1[0x58],local_24,2);
  puVar12 = puStack_40;
  *in_FS_OFFSET = uVar8;
  puStack_40 = &LAB_004ea168;
  FUN_004048d4(&local_2c,uVar8,puVar12);
  FUN_00404ff0(&local_28);
  return;
}

