// Address: 00578840
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00578840(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_DAT_0066b5b8;
  iVar2 = FUN_00405eec(DAT_006d2168);
  FUN_004060a8(&DAT_006d2168,PTR_DAT_00578714,1,iVar2 + 1);
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(int *)(DAT_006d2168 + iVar2 * 0x2c) = param_1;
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 4 + iVar2 * 0x2c) =
       *(undefined4 *)(*(int *)puVar1 + 0x28 + param_1 * 0x130);
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 8 + iVar2 * 0x2c) =
       *(undefined4 *)(*(int *)puVar1 + 0x1c + param_1 * 0x130);
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0xc + iVar2 * 0x2c) =
       *(undefined4 *)
        (*(int *)PTR_DAT_0066af70 + 0x58 + *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 0x2f8
        );
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0x10 + iVar2 * 0x2c) =
       *(undefined4 *)
        (*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 0x2f8
        );
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0x1c + iVar2 * 0x2c) =
       *(undefined4 *)(*(int *)puVar1 + 0x20 + param_1 * 0x130);
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0x14 + iVar2 * 0x2c) =
       *(undefined4 *)(DAT_006d2160 + *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 4);
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0x18 + iVar2 * 0x2c) =
       *(undefined4 *)
        (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 0x2f8
        );
  uVar3 = FUN_0064f2d0(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0x3c +
                        *(int *)(*(int *)puVar1 + 0x20 + param_1 * 0x130) * 0x2f8));
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined4 *)(DAT_006d2168 + 0x20 + iVar2 * 0x2c) = uVar3;
  iVar2 = FUN_00405ef4(DAT_006d2168);
  puVar4 = (undefined4 *)(DAT_006d2168 + 0x24 + iVar2 * 0x2c);
  uVar3 = FUN_004032c8(5000);
  *puVar4 = uVar3;
  iVar2 = FUN_00405ef4(DAT_006d2168);
  *(undefined1 *)(DAT_006d2168 + 0x28 + iVar2 * 0x2c) = 1;
  return;
}

