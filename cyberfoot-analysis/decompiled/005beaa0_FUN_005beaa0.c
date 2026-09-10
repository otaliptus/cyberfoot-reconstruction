// Address: 005beaa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005beaa0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2b8;
  undefined1 *puStack_2b4;
  undefined1 *puStack_2b0;
  int local_2a0 [2];
  undefined4 local_298;
  int local_294;
  undefined1 local_290 [384];
  uint auStack_110 [64];
  int local_10;
  int local_c;
  undefined4 local_8;
  uint *puVar6;
  
  puStack_2b0 = (undefined1 *)0x5beabf;
  local_8 = param_1;
  FUN_005be7d4(param_1,param_2,local_2a0);
  if (0xffff < local_2a0[0]) {
    local_10 = 0;
    puStack_2b4 = &LAB_005bec07;
    uStack_2b8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2b8;
    local_294 = param_3[2];
    local_298 = local_8;
    puStack_2b0 = &stack0xfffffffc;
    if (local_294 != 0) {
      puVar8 = local_290;
      local_c = 0;
      puVar5 = (uint *)(*param_3 + local_294 * 0x10);
      puStack_2b0 = &stack0xfffffffc;
      do {
        puVar6 = puVar5 + -4;
        uVar2 = *puVar6;
        if ((uVar2 & 0xfff) == 8) {
          *puVar8 = 0;
          iVar7 = local_10;
          puVar1 = auStack_110 + local_10 * 2;
          *puVar1 = 0;
          if ((uVar2 & 0x4000) == 0) {
            FUN_00405bcc(puVar5[-2],puVar1);
            auStack_110[iVar7 * 2 + 1] = 0;
            *(uint *)(puVar8 + 4) = *puVar1;
          }
          else {
            FUN_00405bcc(*(undefined4 *)puVar5[-2],puVar1);
            auStack_110[iVar7 * 2 + 1] = puVar5[-2];
            *(uint **)(puVar8 + 4) = puVar1;
          }
          local_10 = local_10 + 1;
        }
        else if ((uVar2 & 0xffff) == 4) {
          *puVar8 = 1;
          *(uint *)(puVar8 + 4) = puVar5[-2];
        }
        else {
          uVar4 = (uVar2 & 0xffff) - 5;
          if (uVar4 < 3) {
            *puVar8 = 2;
            *(uint *)(puVar8 + 4) = puVar5[-2];
            *(uint *)(puVar8 + 8) = puVar5[-1];
          }
          else if (uVar4 == 4) {
            *puVar8 = 0;
            *(uint **)(puVar8 + 4) = puVar6;
          }
          else {
            *puVar8 = 0;
            if ((uVar2 & 0x2000) == 0) {
              *(uint *)(puVar8 + 4) = puVar5[-2];
            }
            else {
              *(uint **)(puVar8 + 4) = puVar6;
            }
          }
        }
        puVar8 = puVar8 + 0xc;
        local_c = local_c + 1;
        puVar5 = puVar6;
      } while (local_c != local_294);
    }
    FUN_005bea60(local_2a0);
    iVar7 = local_10;
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      if (auStack_110[iVar7 * 2 + 1] != 0) {
        uVar3 = FUN_00405bf0(auStack_110[iVar7 * 2]);
        *(undefined4 *)auStack_110[iVar7 * 2 + 1] = uVar3;
      }
    }
    *in_FS_OFFSET = uStack_2b8;
    iVar7 = local_10;
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      puStack_2b0 = (undefined1 *)0x5bec34;
      FUN_004048d4(auStack_110 + iVar7 * 2);
    }
  }
  return;
}

