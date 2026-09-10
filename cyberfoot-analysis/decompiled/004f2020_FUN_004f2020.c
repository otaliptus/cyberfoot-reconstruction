// Address: 004f2020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f2020(int param_1)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  
  dVar1 = *(double *)(param_1 + 600);
  dVar2 = (double)_DAT_004f204c;
  uVar3 = (ushort)(dVar1 < dVar2) << 8 | (ushort)(NAN(dVar1) || NAN(dVar2)) << 10 |
          (ushort)(dVar1 == dVar2) << 0xe;
  if ((dVar1 == dVar2) != 0) {
    dVar1 = *(double *)(param_1 + 0x260);
    dVar2 = (double)_DAT_004f204c;
    uVar3 = (ushort)(dVar1 < dVar2) << 8 | (ushort)(NAN(dVar1) || NAN(dVar2)) << 10 |
            (ushort)(dVar1 == dVar2) << 0xe;
    if ((dVar1 == dVar2) != 0) {
      return 0;
    }
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),uVar3) >> 8),1);
}

