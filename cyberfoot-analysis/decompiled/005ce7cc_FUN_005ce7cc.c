// Address: 005ce7cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ce7cc(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = PTR_DAT_0066af70;
  puVar1 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar5 = 0x14;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_005cf033;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar3 = &stack0xfffffffc;
  switch(*(undefined4 *)(*(int *)puVar2 + 0x94 + *(int *)(puVar1 + 0x600) * 0x2f8)) {
  case 1:
    local_28 = 0x5ce84b;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf04c);
    puVar3 = local_1c;
    break;
  case 2:
    local_28 = 0x5ce85a;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf058);
    puVar3 = local_1c;
    break;
  case 3:
    local_28 = 0x5ce869;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf064);
    puVar3 = local_1c;
    break;
  case 4:
    local_28 = 0x5ce878;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf070);
    puVar3 = local_1c;
    break;
  case 5:
    local_28 = 0x5ce887;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf07c);
    puVar3 = local_1c;
    break;
  case 6:
    local_28 = 0x5ce896;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf088);
    puVar3 = local_1c;
    break;
  case 7:
    local_28 = 0x5ce8a5;
    local_1c = &stack0xfffffffc;
    FUN_0040496c(&local_8,&DAT_005cf094);
    puVar3 = local_1c;
    break;
  case 8:
    local_28 = 0x5ce8b4;
    FUN_0040496c(&local_8,&DAT_005cf0a0);
    puVar3 = local_1c;
  }
  local_1c = puVar3;
  iVar5 = *(int *)(puVar1 + 0x88);
  if (iVar5 == 7) {
    local_28 = 0x5ce8d4;
    uVar4 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x168));
    local_28 = 0x5ce8f8;
    FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                 *(undefined4 *)(PTR_DAT_0066b418 + *(int *)(puVar1 + 0x644) * 4 + -4),uVar4);
    local_28 = *(undefined4 *)
                (PTR_DAT_0066b294 +
                *(int *)(PTR_DAT_0066b418 + *(int *)(puVar1 + 0x644) * 4 + -4) * 4);
    local_2c = &DAT_005cf0a8;
    local_30 = (undefined1 *)0x5ce92c;
    FUN_00409dd8(*(int *)(puVar1 + 0xc0) + *(int *)PTR_DAT_0066b7c4,&stack0xffffffec);
    local_30 = (undefined1 *)0x5ce937;
    FUN_004051d4(&stack0xfffffff0,unaff_ESI);
    local_34 = (undefined *)0x5ce947;
    local_30 = unaff_EBX;
    FUN_00405330(&local_c,3);
    local_28 = 0x5ce955;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_c);
    local_28 = 0x5ce962;
    FUN_00642c50(0x146,&stack0xffffffe8);
    local_28 = 0x5ce970;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x374),unaff_EDI);
  }
  else if (iVar5 == 8) {
    local_28 = 0x5ce98f;
    uVar4 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x168));
    local_28 = 0x5ce9b3;
    FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                 *(undefined4 *)(PTR_DAT_0066ad24 + *(int *)(puVar1 + 0x644) * 4 + -4),uVar4);
    local_28 = *(undefined4 *)
                (PTR_DAT_0066b294 +
                *(int *)(PTR_DAT_0066ad24 + *(int *)(puVar1 + 0x644) * 4 + -4) * 4);
    local_2c = &DAT_005cf0a8;
    local_30 = (undefined1 *)0x5ce9e7;
    FUN_00409dd8(*(int *)(puVar1 + 0xc0) + *(int *)PTR_DAT_0066b7c4,&local_24);
    local_30 = (undefined1 *)0x5ce9f2;
    FUN_004051d4(&local_20,local_24);
    local_30 = local_20;
    local_34 = (undefined *)0x5cea02;
    FUN_00405330(&local_1c,3);
    local_28 = 0x5cea10;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_1c);
    local_28 = 0x5cea1d;
    FUN_00642c50(0x147,&local_28);
    uVar4 = local_28;
    local_28 = 0x5cea2b;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x374),uVar4);
  }
  else if (iVar5 == 9) {
    local_28 = 0x5cea4a;
    uVar4 = FUN_0042d5c8(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x168));
    local_28 = 0x5cea6e;
    FUN_00473ef4(*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2fc),
                 *(undefined4 *)(PTR_DAT_0066b5b4 + *(int *)(puVar1 + 0x644) * 4 + -4),uVar4);
    local_28 = *(undefined4 *)
                (PTR_DAT_0066b294 +
                *(int *)(PTR_DAT_0066b5b4 + *(int *)(puVar1 + 0x644) * 4 + -4) * 4);
    local_2c = &DAT_005cf0a8;
    local_30 = (undefined1 *)0x5ceaa2;
    FUN_00409dd8(*(int *)(puVar1 + 0xc0) + *(int *)PTR_DAT_0066b7c4,&local_34);
    local_30 = (undefined1 *)0x5ceaad;
    FUN_004051d4(&local_30,local_34);
    local_34 = (undefined *)0x5ceabd;
    FUN_00405330(&local_2c,3);
    local_28 = 0x5ceacb;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_2c);
    local_28 = 0x5cead8;
    FUN_00642c50(0x149,&local_38);
    local_28 = 0x5ceae6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_38);
  }
  local_28 = 0x5ceafa;
  FUN_00405194(&local_3c,*(int *)puVar2 + DAT_006d2d44 * 0x2f8);
  local_28 = 0x5ceb08;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x380),local_3c);
  if (*(int *)(puVar1 + 0x88) == 7) {
    switch(*(undefined4 *)(puVar1 + 0x62c)) {
    case 1:
    case 2:
    case 3:
      local_28 = 0x5ceb58;
      FUN_00642c50(0x1dd,&local_44);
      local_28 = local_44;
      local_2c = &DAT_005cf0a8;
      local_30 = (undefined1 *)0x5ceb6b;
      FUN_004051d4(&local_48,local_8);
      local_30 = local_48;
      local_34 = &DAT_005cf0b0;
      local_38 = 0x5ceb80;
      FUN_00642c50(0xd1,&local_4c);
      local_38 = local_4c;
      local_3c = &DAT_005cf0a8;
      local_40 = 0x5ceb96;
      FUN_00409dd8(*(undefined4 *)(puVar1 + 0x62c),&local_54);
      local_40 = 0x5ceba1;
      FUN_004051d4(&local_50,local_54);
      local_40 = local_50;
      local_44 = 0x5cebb1;
      FUN_00405330(&local_40,7);
      local_28 = 0x5cebbf;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_40);
      break;
    case 4:
      local_28 = 0x5cebd1;
      FUN_00642c50(0xd6,&local_58);
      local_28 = 0x5cebdf;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_58);
      break;
    case 5:
      local_28 = 0x5cebf1;
      FUN_00642c50(0xd7,&local_5c);
      local_28 = 0x5cebff;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_5c);
      break;
    case 6:
      local_28 = 0x5cec0e;
      FUN_00642c50(0xd8,&local_60);
      local_28 = 0x5cec1c;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_60);
      break;
    case 7:
      if ((*(int *)(puVar1 + 0x600) == *(int *)(PTR_DAT_0066ad60 + 0x2a0)) ||
         (*(int *)(puVar1 + 0x600) == *(int *)(PTR_DAT_0066ad60 + 0x2a4))) {
        local_28 = 0x5cec4d;
        FUN_00642c50(0xd9,&local_64);
        local_28 = 0x5cec5b;
        FUN_004e1414(*(undefined4 *)(param_1 + 900),local_64);
      }
      else {
        local_28 = 0x5cec6a;
        FUN_00642c50(0x1fd,&local_68);
        local_28 = 0x5cec78;
        FUN_004e1414(*(undefined4 *)(param_1 + 900),local_68);
      }
    }
  }
  if (7 < *(int *)(puVar1 + 0x88)) {
    iVar5 = *(int *)(puVar1 + 0x62c);
    if (iVar5 - 1U < 3) {
      local_28 = 0x5cecb7;
      FUN_00642c50(0x1dd,&local_70);
      local_28 = local_70;
      local_2c = &DAT_005cf0a8;
      local_30 = (undefined1 *)0x5cecca;
      FUN_004051d4(&local_74,local_8);
      local_30 = local_74;
      local_34 = &DAT_005cf0b0;
      local_38 = 0x5cecdf;
      FUN_00642c50(0xd1,&local_78);
      local_38 = local_78;
      local_3c = &DAT_005cf0a8;
      local_40 = 0x5cecf5;
      FUN_00409dd8(*(undefined4 *)(puVar1 + 0x62c),&local_80);
      local_40 = 0x5ced00;
      FUN_004051d4(&local_7c,local_80);
      local_40 = local_7c;
      local_44 = 0x5ced10;
      FUN_00405330(&local_6c,7);
      local_28 = 0x5ced1e;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_6c);
    }
    else if (iVar5 == 4) {
      local_28 = 0x5ced30;
      FUN_00642c50(0xd7,&local_84);
      local_28 = 0x5ced3e;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_84);
    }
    else if (iVar5 == 5) {
      local_28 = 0x5ced53;
      FUN_00642c50(0xd8,&local_88);
      local_28 = 0x5ced64;
      FUN_004e1414(*(undefined4 *)(param_1 + 900),local_88);
    }
    else if (iVar5 == 6) {
      if ((*(int *)(puVar1 + 0x600) == *(int *)(PTR_DAT_0066ad60 + 0x120)) ||
         (*(int *)(puVar1 + 0x600) == *(int *)(PTR_DAT_0066ad60 + 0x124))) {
        local_28 = 0x5ced98;
        FUN_00642c50(0xd9,&local_8c);
        local_28 = 0x5ceda9;
        FUN_004e1414(*(undefined4 *)(param_1 + 900),local_8c);
      }
      else {
        local_28 = 0x5cedbb;
        FUN_00642c50(0x1fd,&local_90);
        local_28 = 0x5cedcc;
        FUN_004e1414(*(undefined4 *)(param_1 + 900),local_90);
      }
    }
  }
  local_28 = 0x5cede3;
  FUN_00404b48(&local_94,*(int *)puVar2 + *(int *)(puVar1 + 0x600) * 0x2f8);
  local_28 = 0x5cedfa;
  FUN_00551138(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x16c),local_94);
  local_28 = 0x5cee11;
  FUN_00404b48(&local_98,*(int *)puVar2 + *(int *)(puVar1 + 0x600) * 0x2f8);
  local_28 = 0x5cee28;
  FUN_00551138(*(undefined4 *)(*(int *)(param_1 + 0x360) + 0x16c),local_98);
  local_28 = 0x5cee49;
  FUN_00551110(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x16c),
               *(undefined4 *)(*(int *)puVar2 + 0xac + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cee6a;
  FUN_00551050(*(undefined4 *)(*(int *)(param_1 + 0x364) + 0x16c),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cee90;
  FUN_00404b48(&local_9c,
               *(int *)PTR_DAT_0066b718 +
               *(int *)(*(int *)puVar2 + 0x44 + *(int *)(puVar1 + 0x600) * 0x2f8) * 0x80);
  local_28 = 0x5ceea1;
  FUN_00466238(*(undefined4 *)(param_1 + 800),local_9c);
  local_28 = 0x5ceeb2;
  FUN_00645714(*(undefined4 *)(puVar1 + 0x600),&local_a0);
  if (local_a0 != 0) {
    local_28 = 0x5ceecc;
    FUN_00645714(*(undefined4 *)(puVar1 + 0x600),&local_a4);
    local_28 = 0x5ceee3;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x328) + 0x168),local_a4);
  }
  local_28 = 0x5ceefe;
  FUN_004663a8(*(undefined4 *)(param_1 + 0x318),
               *(undefined4 *)(*(int *)puVar2 + 0xac + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cef1c;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x68),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cef3a;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 800) + 0x68),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cef58;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x37c) + 0x68),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cef76;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 0x380) + 0x68),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  local_28 = 0x5cef94;
  FUN_0042a3a0(*(undefined4 *)(*(int *)(param_1 + 900) + 0x68),
               *(undefined4 *)(*(int *)puVar2 + 0xb0 + *(int *)(puVar1 + 0x600) * 0x2f8));
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005cf03d;
  local_20 = (undefined1 *)0x5cefb1;
  FUN_004048f8(&local_a4,5,puVar3);
  local_20 = (undefined1 *)0x5cefc1;
  FUN_00405008(&local_90,4);
  local_20 = (undefined1 *)0x5cefc9;
  FUN_004048d4(&local_80);
  local_20 = (undefined1 *)0x5cefd6;
  FUN_00405008(&local_7c,10);
  local_20 = (undefined1 *)0x5cefde;
  FUN_004048d4(&local_54);
  local_20 = (undefined1 *)0x5cefeb;
  FUN_00405008(&local_50,7);
  local_20 = (undefined1 *)0x5ceff3;
  FUN_004048d4(&local_34);
  local_20 = (undefined1 *)0x5cf000;
  FUN_00405008(&local_30,3);
  local_20 = (undefined1 *)0x5cf008;
  FUN_004048d4(&local_24);
  local_20 = (undefined1 *)0x5cf015;
  FUN_00405008(&local_20,3);
  local_20 = (undefined1 *)0x5cf01d;
  FUN_004048d4(&stack0xffffffec);
  local_20 = (undefined1 *)0x5cf02a;
  FUN_00405008(&stack0xfffffff0,2);
  local_20 = (undefined1 *)0x5cf032;
  FUN_004048d4(&local_8);
  return;
}

