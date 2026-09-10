// Address: 00416c48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00416c48(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined3 uVar6;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined2 uVar7;
  int *in_FS_OFFSET;
  int iStackY_48;
  undefined1 *puStackY_44;
  undefined1 *puVar8;
  undefined1 *puVar9;
  _union_2683 local_2c;
  int *local_1c;
  int *local_18;
  ushort local_12;
  ushort local_10;
  undefined1 local_d;
  int local_c;
  ushort *local_8;
  
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  local_d = 1;
  uVar1 = *param_1;
  uVar7 = (undefined2)((uint)unaff_ESI >> 0x10);
  uVar5 = CONCAT22(uVar7,uVar1) & 0xffff0fff;
  local_c = param_3;
  local_8 = param_2;
  if ((ushort)uVar5 < 0x10f) {
    uVar6 = (undefined3)(uVar5 >> 8);
    if (uVar1 == 0) {
      local_d = FUN_00416888(CONCAT31(uVar6,1),0);
    }
    else if (uVar1 == 1) {
      local_d = FUN_0041689c(CONCAT31(uVar6,2),0,param_3);
    }
    else {
      cVar3 = FUN_00418f24(*param_2,&local_1c);
      if (cVar3 == '\0') {
        FUN_0041159c();
      }
      else {
        cVar3 = (**(code **)(*local_1c + 4))(local_1c,param_1,0xb);
        if (cVar3 == '\0') {
          VariantInit((VARIANTARG *)&local_2c.n2);
          puStackY_44 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_44;
          iStackY_48 = 0x416da9;
          FUN_004126a8(&local_2c,local_8,*param_1);
          if ((local_2c.n2.vt & 0xfff) != *param_1) {
            iStackY_48 = 0x416dbb;
            FUN_004114ac();
          }
          iStackY_48 = 0x416dc8;
          local_d = FUN_00416abc(param_1,&local_2c,local_c);
          *in_FS_OFFSET = (int)puStackY_44;
          uVar4 = FUN_00411d38(&local_2c,puStackY_44,puVar8);
          return uVar4;
        }
        if (*param_1 != local_10) {
          VariantInit((VARIANTARG *)&local_2c.n2);
          puVar8 = &LAB_00416d53;
          puStackY_44 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_44;
          iStackY_48 = 0x416d04;
          FUN_004126a8(&local_2c,param_1,local_10);
          if ((local_2c.n2.vt & 0xfff) != local_10) {
            iStackY_48 = 0x416d17;
            FUN_004114ac();
          }
          iStackY_48 = local_c;
          uVar5 = (**(code **)(*local_1c + 0x34))(local_1c,&local_2c,local_8);
          local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
          *in_FS_OFFSET = iStackY_48;
          puStackY_44 = (undefined1 *)0x416d52;
          uVar4 = FUN_00411d38(&local_2c,iStackY_48,puVar8);
          return uVar4;
        }
        uVar5 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,local_8);
        local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
      }
    }
  }
  else if (*param_2 == 0) {
    local_d = FUN_00416888(0,1);
  }
  else if (*param_2 == 1) {
    local_d = FUN_0041689c(0,2,param_3);
  }
  else {
    cVar3 = FUN_00418f24(CONCAT22(uVar7,uVar1),&local_18);
    if (cVar3 == '\0') {
      FUN_0041159c();
    }
    else {
      cVar3 = (**(code **)(*local_18 + 8))(local_18,local_8,0xb);
      if (cVar3 == '\0') {
        if ((*local_8 & 0xfff) < 0x10f) {
          VariantInit((VARIANTARG *)&local_2c.n2);
          puStackY_44 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_44;
          iStackY_48 = 0x416f3b;
          FUN_004126a8(&local_2c,param_1,*local_8);
          if (*local_8 != local_2c.n2.vt) {
            iStackY_48 = 0x416f4c;
            FUN_004114ac();
          }
          iStackY_48 = 0x416f5a;
          local_d = FUN_00416abc(&local_2c,local_8,local_c);
          *in_FS_OFFSET = (int)puStackY_44;
          uVar4 = FUN_00411d38(&local_2c,puStackY_44,puVar9);
          return uVar4;
        }
        cVar3 = FUN_00418f24(*local_8,&local_1c);
        if (cVar3 == '\0') {
          FUN_0041159c();
        }
        else {
          cVar3 = (**(code **)(*local_1c + 4))(local_1c,param_1,0xb);
          if (cVar3 == '\0') {
            FUN_0041159c();
          }
          else {
            if (*param_1 != local_10) {
              puStackY_44 = (undefined1 *)0x416fc2;
              VariantInit((VARIANTARG *)&local_2c.n2);
              puStackY_44 = &LAB_00417029;
              iStackY_48 = *in_FS_OFFSET;
              *in_FS_OFFSET = (int)&iStackY_48;
              FUN_004126a8(&local_2c,param_1,local_10);
              if (local_2c.n2.vt != local_10) {
                FUN_004114ac();
              }
              iVar2 = local_c;
              uVar5 = (**(code **)(*local_1c + 0x34))(local_1c,&local_2c,local_8);
              puVar8 = puStackY_44;
              local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
              *in_FS_OFFSET = iVar2;
              puStackY_44 = (undefined1 *)0x41705c;
              iStackY_48 = 0x417028;
              uVar4 = FUN_00411d38(&local_2c,iVar2,puVar8);
              return uVar4;
            }
            puStackY_44 = (undefined1 *)0x417041;
            uVar5 = (**(code **)(*local_1c + 0x34))(local_1c,param_1,local_8);
            local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
          }
        }
      }
      else {
        if (*local_8 != local_12) {
          VariantInit((VARIANTARG *)&local_2c.n2);
          puVar8 = &LAB_00416ed1;
          puStackY_44 = (undefined1 *)*in_FS_OFFSET;
          *in_FS_OFFSET = (int)&puStackY_44;
          iStackY_48 = 0x416e87;
          FUN_004126a8(&local_2c,local_8,local_12);
          if (local_2c.n2.vt != local_12) {
            iStackY_48 = 0x416e96;
            FUN_004114ac();
          }
          iStackY_48 = local_c;
          uVar5 = (**(code **)(*local_18 + 0x34))(local_18,param_1,&local_2c);
          local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
          *in_FS_OFFSET = iStackY_48;
          puStackY_44 = (undefined1 *)0x416ed0;
          uVar4 = FUN_00411d38(&local_2c,iStackY_48,puVar8);
          return uVar4;
        }
        uVar5 = (**(code **)(*local_18 + 0x34))(local_18,param_1,local_8);
        local_d = (&DAT_00662474)[(uVar5 & 0x7f) + local_c * 2];
      }
    }
  }
  return local_d;
}

