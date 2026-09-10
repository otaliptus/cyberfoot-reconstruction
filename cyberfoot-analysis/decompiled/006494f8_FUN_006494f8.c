// Address: 006494f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006494f8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  
  puStack_20 = (undefined1 *)0x649511;
  FUN_00404d94(param_4);
  puStack_24 = &LAB_0064976f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  if (param_1 != -1) {
    local_10 = -1;
    puStack_20 = &stack0xfffffffc;
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
    iVar5 = local_10;
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar4 = 0;
      do {
        if (((*(int *)(*(int *)PTR_DAT_0066b474 + iVar4 * 0x20) == param_1) &&
            (*(int *)(*(int *)PTR_DAT_0066b474 + 0x1c + iVar4 * 0x20) ==
             *(int *)(PTR_DAT_0066ac78 + 0xc0))) &&
           (iVar5 = iVar4, param_2 == *(int *)(*(int *)PTR_DAT_0066b474 + 0x18 + iVar4 * 0x20)))
        break;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        iVar5 = local_10;
      } while (iVar3 != 0);
    }
    local_10 = iVar5;
    bVar6 = local_10 == -1;
    if (bVar6) {
      iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b474);
      FUN_004060a8(PTR_DAT_0066b474,PTR_DAT_00488f00,1,iVar5 + 1);
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
      *(int *)(*(int *)PTR_DAT_0066b474 + iVar5 * 0x20) = param_1;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
      *(undefined4 *)(*(int *)PTR_DAT_0066b474 + 0x1c + iVar5 * 0x20) =
           *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
      *(int *)(*(int *)PTR_DAT_0066b474 + 0x18 + iVar5 * 0x20) = param_2;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b474);
      *(undefined4 *)(*(int *)PTR_DAT_0066b474 + 4 + iVar5 * 0x20) = 1;
    }
    else {
      FUN_00404cf0(param_4,&DAT_00649788);
      if (bVar6) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 4 + local_10 * 0x20);
        *piVar1 = *piVar1 + 1;
        bVar7 = *piVar1 == 0;
      }
      else {
        FUN_00404cf0(param_4,&DAT_00649794);
        if (bVar6) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 8 + local_10 * 0x20);
          *piVar1 = *piVar1 + 1;
          bVar7 = *piVar1 == 0;
        }
        else {
          FUN_00404cf0(param_4,&DAT_006497a0);
          if (bVar6) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 0xc + local_10 * 0x20);
            *piVar1 = *piVar1 + 1;
            bVar7 = *piVar1 == 0;
          }
          else {
            FUN_00404cf0(param_4,&DAT_006497ac);
            if (bVar6) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 0x10 + local_10 * 0x20);
              *piVar1 = *piVar1 + param_3;
              bVar7 = *piVar1 == 0;
            }
            else {
              FUN_00404cf0(param_4,&DAT_006497b8);
              if (bVar6) {
                piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 0x14 + local_10 * 0x20);
                *piVar1 = *piVar1 + 1;
                bVar7 = *piVar1 == 0;
              }
              else {
                FUN_00404cf0(param_4,&DAT_006497c4);
                bVar7 = false;
                if (bVar6) {
                  piVar1 = (int *)(*(int *)PTR_DAT_0066b474 + 0x14 + local_10 * 0x20);
                  *piVar1 = *piVar1 + 1;
                  bVar7 = *piVar1 == 0;
                }
              }
            }
          }
        }
      }
      FUN_00404cf0(param_4,&DAT_006497ac);
      if ((bVar7) &&
         (piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x28 + param_1 * 0x80),
         *piVar1 = *piVar1 + param_3, *(int *)(PTR_DAT_0066ac78 + 0x88) != 3)) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b718 + 0x2c + param_1 * 0x80);
        *piVar1 = *piVar1 + param_3;
      }
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00649776;
  puStack_24 = (undefined1 *)0x64976e;
  FUN_004048d4(&param_4,uStack_28,puVar2);
  return;
}

