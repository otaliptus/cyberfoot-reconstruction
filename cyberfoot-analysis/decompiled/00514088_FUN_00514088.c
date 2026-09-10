// Address: 00514088
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_00514088(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int aiStackY_1814 [1523];
  undefined1 *puVar6;
  int *piVar7;
  int local_38;
  int local_28;
  int local_18;
  int local_10;
  int *local_8;
  
  bVar5 = 0;
  puVar6 = &stack0xfffffffc;
  if (-1 < param_1[0x128]) {
    local_8 = param_1;
    iVar2 = (**(code **)(*param_1 + 0x138))();
    if (-1 < iVar2) {
      iVar2 = FUN_0050ae9c(local_8[0x135]);
      if (local_8[0x128] < iVar2) {
        iVar2 = (**(code **)(*local_8 + 0x138))();
        iVar3 = (**(code **)(*local_8 + 0x11c))();
        if (iVar2 < iVar3) {
          iVar2 = (**(code **)(*local_8 + 0x138))();
          if (local_8[0x136] <= iVar2) {
            if ((*(byte *)((int)local_8 + 0x491) & 0x40) == 0) {
              piVar7 = &stack0xffffffe8;
              uVar4 = (**(code **)(*local_8 + 0x138))();
              (**(code **)(*local_8 + 0x1cc))(local_8,local_8[0x128],uVar4,piVar7);
              local_28 = local_18;
              *(undefined4 *)((int)&stack0xffffffdc + (uint)bVar5 * 0xfffffffe * 4) =
                   *(undefined4 *)((int)&stack0xffffffec + (uint)bVar5 * 0xfffffffe * 4);
              *(undefined4 *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
              *(undefined4 *)
               ((int)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
               ((uint)bVar5 * -2 + 1) * 4) =
                   ((undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8))
                   [(uint)bVar5 * -2 + 1];
              iVar2 = FUN_0050f404(local_8,0);
              local_18 = local_18 + iVar2;
              iVar2 = FUN_0050f404(local_8,2);
              local_10 = local_10 - iVar2;
              iVar2 = (**(code **)(*(int *)local_8[0x135] + 0x30))
                                ((int *)local_8[0x135],local_8[0x128]);
              if (local_8[0xa4] <= *(int *)(iVar2 + 0x88)) {
                FUN_0050f688(local_8,&stack0xffffffc8);
                if (local_28 < local_38) {
                  FUN_0050f688(local_8,&stack0xffffffc8);
                  local_28 = local_38;
                }
              }
              FUN_00511d38(local_8,&stack0xffffffd8);
              FUN_00511048(local_8,&stack0xffffffd8);
            }
            else {
              uVar4 = (**(code **)(*local_8 + 0x138))();
              FUN_00514018(uVar4,&stack0xffffffc8);
              local_18 = local_38;
              *(undefined4 *)((int)&stack0xffffffec + (uint)bVar5 * 0xfffffffe * 4) =
                   *(undefined4 *)((int)&stack0xffffffcc + (uint)bVar5 * 0xfffffffe * 4);
              *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   *(undefined4 *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
              ((undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8))
              [(uint)bVar5 * -2 + 1] =
                   *(undefined4 *)
                    ((int)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                    ((uint)bVar5 * -2 + 1) * 4);
              local_18 = local_18 - *(int *)(local_8[0x8e] + 0x2c);
              iVar2 = FUN_0050f404(local_8,0,puVar6);
              local_18 = local_18 - iVar2;
              iVar2 = FUN_0050f404(local_8,2);
              local_10 = local_10 - iVar2;
              local_28 = local_18;
              *(undefined4 *)((int)&stack0xffffffdc + (uint)bVar5 * 0xfffffffe * 4) =
                   *(undefined4 *)((int)&stack0xffffffec + (uint)bVar5 * 0xfffffffe * 4);
              *(undefined4 *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
              *(undefined4 *)
               ((int)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
               ((uint)bVar5 * -2 + 1) * 4) =
                   ((undefined4 *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8))
                   [(uint)bVar5 * -2 + 1];
              FUN_0050f004(local_8,&stack0xffffffc8);
              local_28 = local_38;
            }
            if ((char)local_8[0xb8] == '\0') {
              iVar2 = (**(code **)(*local_8 + 0x11c))();
              if (0 < iVar2) {
                cVar1 = FUN_00403c80(local_8);
                if (cVar1 != '\0') {
                  FUN_0050f004(local_8,&stack0xffffffc8);
                  cVar1 = FUN_004e529c(PTR_DAT_004e5104,&stack0xffffffe8,&stack0xffffffc8);
                  if (((cVar1 != '\0') && ((char)local_8[0xb8] == '\0')) &&
                     ((*(byte *)(local_8 + 0x9c) & 0x10) == 0)) {
                    FUN_004e64b0(local_8[0x82],&stack0xffffffd8);
                    FUN_004e5688(PTR_DAT_004e5160,local_8[0x82],&stack0xffffffe8,
                                 (*(byte *)(local_8 + 0x9c) & 2) != 0);
                    (**(code **)(*local_8 + 0x44))(local_8,&stack0xffffffc8);
                    FUN_004e64b0(local_8[0x82],&stack0xffffffc8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

