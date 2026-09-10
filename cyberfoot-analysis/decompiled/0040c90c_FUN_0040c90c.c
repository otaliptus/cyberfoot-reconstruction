// Address: 0040c90c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c90c(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  byte *pbVar10;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar11;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_23;
  char local_22;
  undefined1 local_21;
  undefined2 local_20;
  short local_1e;
  short local_1c;
  ushort local_1a;
  undefined1 local_17;
  undefined2 local_16;
  ushort local_14;
  ushort local_12;
  int local_10;
  byte local_9;
  byte *local_8;
  
  puStack_38 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  puStack_3c = &LAB_0040d08d;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puVar11 = &stack0xfffffffc;
  local_8 = param_1;
  if ((param_1 != (byte *)0x0) && (puVar11 = &stack0xfffffffc, *(int *)(param_4 + -0x108) < 2)) {
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + 1;
    bVar9 = 0x20;
    local_17 = 0;
    local_21 = 0;
    local_22 = '\0';
    local_8 = param_1;
    while (bVar2 = *local_8, bVar2 != 0) {
      local_9 = bVar2;
      if ((*(byte *)((int)&DAT_00662134 + ((int)(uint)bVar2 >> 3)) >> (bVar2 & 7) & 1) == 0) {
        pbVar5 = (byte *)FUN_0040efa4(local_8);
        bVar2 = local_9;
        if ((byte)(local_9 + 0x9f) < 0x1a) {
          bVar2 = local_9 - 0x20;
        }
        cVar8 = bVar2 + 0xa5;
        bVar1 = bVar9;
        if ((((byte)(bVar2 + 0xbf) < 0x1a) && (bVar1 = bVar2, bVar2 == 0x4d)) && (bVar9 == 0x48)) {
          bVar2 = 0x4e;
          bVar1 = bVar2;
        }
        bVar9 = bVar1;
        uVar6 = bVar2 - 0x22;
        local_8 = pbVar5;
        if (uVar6 < 0x39) {
          uVar4 = CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(bVar2 + 0x40c9cd));
          switch(bVar2) {
          case 0x22:
          case 0x27:
            while( true ) {
              bVar2 = *local_8;
              if ((bVar2 == 0) || (bVar2 == local_9)) break;
              if ((*(byte *)((int)&DAT_00662134 + ((int)(uint)bVar2 >> 3)) >> (bVar2 & 7) & 1) == 0)
              {
                local_8 = local_8 + 1;
              }
              else {
                local_8 = (byte *)FUN_0040efa4(local_8);
              }
            }
            FUN_0040c548(pbVar5,(int)local_8 - (int)pbVar5);
            if (*local_8 != 0) {
              local_8 = local_8 + 1;
            }
            break;
          default:
            goto switchD_0040c9e8_caseD_23;
          case 0x2f:
            if (DAT_0066c68d != '\0') {
              FUN_0040c548(&DAT_0066c68d,1);
            }
            break;
          case 0x3a:
            if (DAT_0066c698 != '\0') {
              FUN_0040c548(&DAT_0066c698,1);
            }
            break;
          case 0x41:
            FUN_0040c65c();
            pbVar5 = local_8;
            pbVar10 = local_8 + -1;
            iVar7 = FUN_0040a8c8(pbVar10,"AM/PM",5);
            if (iVar7 == 0) {
              if (0xb < local_1a) {
                pbVar10 = pbVar5 + 2;
              }
              FUN_0040c548(pbVar10,2);
              local_22 = '\x01';
              local_8 = local_8 + 4;
            }
            else {
              iVar7 = FUN_0040a8c8(pbVar10,&DAT_0040d0a4,3);
              if (iVar7 == 0) {
                if (0xb < local_1a) {
                  pbVar10 = pbVar5 + 1;
                }
                FUN_0040c548(pbVar10,1);
                local_22 = '\x01';
                local_8 = local_8 + 2;
              }
              else {
                iVar7 = FUN_0040a8c8(pbVar10,&DAT_0040d0a8,4);
                if (iVar7 == 0) {
                  if (local_1a < 0xc) {
                    FUN_0040c58c(DAT_0066c69c);
                  }
                  else {
                    FUN_0040c58c(DAT_0066c6a0);
                  }
                  local_22 = '\x01';
                  local_8 = local_8 + 3;
                }
                else {
                  iVar7 = FUN_0040a8c8(pbVar10,&DAT_0040d0b0,4);
                  if (iVar7 == 0) {
                    FUN_0040c624();
                    uVar6 = FUN_0040c3a8();
                    FUN_0040c58c(*(undefined4 *)(&DAT_0066c724 + (uVar6 & 0xffff) * 4));
                    local_8 = local_8 + 3;
                  }
                  else {
                    iVar7 = FUN_0040a8c8(pbVar10,&DAT_0040d0b8,3);
                    if (iVar7 == 0) {
                      FUN_0040c624();
                      uVar6 = FUN_0040c3a8();
                      FUN_0040c58c(*(undefined4 *)(&DAT_0066c708 + (uVar6 & 0xffff) * 4));
                      local_8 = local_8 + 2;
                    }
                    else {
                      FUN_0040c548(&local_9,1);
                    }
                  }
                }
              }
            }
            break;
          case 0x43:
            FUN_0040c5f8(uVar4,cVar8);
            FUN_0040c90c(DAT_0066c690);
            puVar11 = &stack0xfffffffc;
            FUN_0040c65c();
            if (((local_1a != 0) || (local_1c != 0)) || (local_1e != 0)) {
              FUN_0040c548(&DAT_0040d0bc,1,puVar11);
              FUN_0040c90c(DAT_0066c6a8);
            }
            break;
          case 0x44:
            FUN_0040c5f8(uVar4,cVar8);
            if (local_10 - 1U < 2) {
              puVar11 = &stack0xfffffffc;
              FUN_0040c624();
              FUN_0040c5ac(local_16,local_10,puVar11,param_4);
            }
            else if (local_10 == 3) {
              uVar6 = FUN_0040c3a8();
              FUN_0040c58c(*(undefined4 *)(&DAT_0066c708 + (uVar6 & 0xffff) * 4));
            }
            else if (local_10 == 4) {
              uVar6 = FUN_0040c3a8();
              FUN_0040c58c(*(undefined4 *)(&DAT_0066c724 + (uVar6 & 0xffff) * 4));
            }
            else if (local_10 == 5) {
              FUN_0040c90c(DAT_0066c690);
            }
            else {
              FUN_0040c90c(DAT_0066c694);
            }
            break;
          case 0x45:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c624();
            FUN_0040c804(local_10,&local_2c,puVar11,&stack0xfffffffc,param_4);
            FUN_0040c58c(local_2c);
            break;
          case 0x47:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c624();
            FUN_0040c69c(local_10,&local_28,puVar11,&stack0xfffffffc,param_4);
            FUN_0040c58c(local_28);
            break;
          case 0x48:
            FUN_0040c5f8(uVar4,cVar8);
            FUN_0040c65c();
            local_23 = 0;
            pbVar5 = local_8;
            while (bVar2 = *pbVar5, bVar2 != 0) {
              if ((*(byte *)((int)&DAT_00662134 + ((int)(uint)bVar2 >> 3)) >> (bVar2 & 7) & 1) == 0)
              {
                bVar2 = *pbVar5;
                if (bVar2 < 0x49) {
                  if (bVar2 == 0x48) break;
                  if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
                    local_23 = local_23 ^ 1;
                  }
                  else if (bVar2 == 0x41) goto LAB_0040cc7e;
                }
                else if (bVar2 == 0x61) {
LAB_0040cc7e:
                  if (local_23 == 0) {
                    iVar7 = FUN_0040a8c8(pbVar5,"AM/PM",5);
                    if (((iVar7 == 0) || (iVar7 = FUN_0040a8c8(pbVar5,&DAT_0040d0a4,3), iVar7 == 0))
                       || (iVar7 = FUN_0040a8c8(pbVar5,&DAT_0040d0a8,4), iVar7 == 0)) {
                      local_22 = '\x01';
                    }
                    break;
                  }
                }
                else if (bVar2 == 0x68) break;
                pbVar5 = pbVar5 + 1;
              }
              else {
                pbVar5 = (byte *)FUN_0040efa4(pbVar5);
              }
            }
            uVar3 = local_1a;
            if (local_22 != '\0') {
              if (local_1a == 0) {
                uVar3 = 0xc;
              }
              else if (0xc < local_1a) {
                uVar3 = local_1a - 0xc;
              }
            }
            if (2 < local_10) {
              local_10 = 2;
            }
            FUN_0040c5ac(uVar3,local_10);
            break;
          case 0x4d:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c624();
            if (local_10 - 1U < 2) {
              FUN_0040c5ac(local_14,local_10,puVar11,param_4);
            }
            else if (local_10 - 1U == 2) {
              FUN_0040c58c((&DAT_0066c6a8)[local_14]);
            }
            else {
              FUN_0040c58c(*(undefined4 *)(&DAT_0066c6d8 + (uint)local_14 * 4));
            }
            break;
          case 0x4e:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c65c();
            if (2 < local_10) {
              local_10 = 2;
            }
            FUN_0040c5ac(local_1c,local_10,puVar11,param_4);
            break;
          case 0x53:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c65c();
            if (2 < local_10) {
              local_10 = 2;
            }
            FUN_0040c5ac(local_1e,local_10,puVar11,param_4);
            break;
          case 0x54:
            FUN_0040c5f8(uVar4,cVar8);
            if (local_10 == 1) {
              FUN_0040c90c(DAT_0066c6a4);
            }
            else {
              FUN_0040c90c(DAT_0066c6a8);
            }
            break;
          case 0x59:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c624();
            if (local_10 < 3) {
              FUN_0040c5ac((uint)local_12 % 100,2,100,param_4);
            }
            else {
              FUN_0040c5ac(local_12,4,puVar11,param_4);
            }
            break;
          case 0x5a:
            FUN_0040c5f8(uVar4,cVar8);
            puVar11 = &stack0xfffffffc;
            FUN_0040c65c();
            if (3 < local_10) {
              local_10 = 3;
            }
            FUN_0040c5ac(local_20,local_10,puVar11,param_4);
          }
        }
        else {
switchD_0040c9e8_caseD_23:
          FUN_0040c548(&local_9,1);
        }
      }
      else {
        uVar4 = FUN_0040ef84(local_8);
        FUN_0040c548(local_8,uVar4);
        local_8 = (byte *)FUN_0040efa4(local_8);
        bVar9 = 0x20;
      }
    }
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + -1;
    puVar11 = puStack_38;
  }
  puStack_38 = puVar11;
  puVar11 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0040d094;
  puStack_3c = (undefined1 *)0x40d08c;
  FUN_004048f8(&local_2c,2,puVar11);
  return;
}

