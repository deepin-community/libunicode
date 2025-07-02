/**
 * This file is part of the "libunicode" project
 *   Copyright (c) 2020-2021 Christian Parpart <christian@parpart.family>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <libunicode/ucd_enums.h>

#include <format>

template <>
struct std::formatter<unicode::Plane>: std::formatter<std::string_view>
{
    auto format(unicode::Plane value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Plane::Basic_Multilingual_Plane: name = "Basic_Multilingual_Plane"; break;
            case unicode::Plane::Supplementary_Ideographic_Plane: name = "Supplementary_Ideographic_Plane"; break;
            case unicode::Plane::Supplementary_Multilingual_Plane: name = "Supplementary_Multilingual_Plane"; break;
            case unicode::Plane::Supplementary_Private_Use_Area_Plane: name = "Supplementary_Private_Use_Area_Plane"; break;
            case unicode::Plane::Supplementary_Special_purpose_Plane: name = "Supplementary_Special_purpose_Plane"; break;
            case unicode::Plane::Tertiary_Ideographic_Plane: name = "Tertiary_Ideographic_Plane"; break;
            case unicode::Plane::Unassigned: name = "Unassigned"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Age>: std::formatter<std::string_view>
{
    auto format(unicode::Age value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Age::Unassigned: name = "Unassigned"; break;
            case unicode::Age::V10_0: name = "V10_0"; break;
            case unicode::Age::V11_0: name = "V11_0"; break;
            case unicode::Age::V12_0: name = "V12_0"; break;
            case unicode::Age::V12_1: name = "V12_1"; break;
            case unicode::Age::V13_0: name = "V13_0"; break;
            case unicode::Age::V14_0: name = "V14_0"; break;
            case unicode::Age::V15_0: name = "V15_0"; break;
            case unicode::Age::V15_1: name = "V15_1"; break;
            case unicode::Age::V16_0: name = "V16_0"; break;
            case unicode::Age::V1_1: name = "V1_1"; break;
            case unicode::Age::V2_0: name = "V2_0"; break;
            case unicode::Age::V2_1: name = "V2_1"; break;
            case unicode::Age::V3_0: name = "V3_0"; break;
            case unicode::Age::V3_1: name = "V3_1"; break;
            case unicode::Age::V3_2: name = "V3_2"; break;
            case unicode::Age::V4_0: name = "V4_0"; break;
            case unicode::Age::V4_1: name = "V4_1"; break;
            case unicode::Age::V5_0: name = "V5_0"; break;
            case unicode::Age::V5_1: name = "V5_1"; break;
            case unicode::Age::V5_2: name = "V5_2"; break;
            case unicode::Age::V6_0: name = "V6_0"; break;
            case unicode::Age::V6_1: name = "V6_1"; break;
            case unicode::Age::V6_2: name = "V6_2"; break;
            case unicode::Age::V6_3: name = "V6_3"; break;
            case unicode::Age::V7_0: name = "V7_0"; break;
            case unicode::Age::V8_0: name = "V8_0"; break;
            case unicode::Age::V9_0: name = "V9_0"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Bidi_Class>: std::formatter<std::string_view>
{
    auto format(unicode::Bidi_Class value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Bidi_Class::Arabic_Letter: name = "Arabic_Letter"; break;
            case unicode::Bidi_Class::Arabic_Number: name = "Arabic_Number"; break;
            case unicode::Bidi_Class::Boundary_Neutral: name = "Boundary_Neutral"; break;
            case unicode::Bidi_Class::Common_Separator: name = "Common_Separator"; break;
            case unicode::Bidi_Class::European_Number: name = "European_Number"; break;
            case unicode::Bidi_Class::European_Separator: name = "European_Separator"; break;
            case unicode::Bidi_Class::European_Terminator: name = "European_Terminator"; break;
            case unicode::Bidi_Class::First_Strong_Isolate: name = "First_Strong_Isolate"; break;
            case unicode::Bidi_Class::Left_To_Right: name = "Left_To_Right"; break;
            case unicode::Bidi_Class::Left_To_Right_Embedding: name = "Left_To_Right_Embedding"; break;
            case unicode::Bidi_Class::Left_To_Right_Isolate: name = "Left_To_Right_Isolate"; break;
            case unicode::Bidi_Class::Left_To_Right_Override: name = "Left_To_Right_Override"; break;
            case unicode::Bidi_Class::Nonspacing_Mark: name = "Nonspacing_Mark"; break;
            case unicode::Bidi_Class::Other_Neutral: name = "Other_Neutral"; break;
            case unicode::Bidi_Class::Paragraph_Separator: name = "Paragraph_Separator"; break;
            case unicode::Bidi_Class::Pop_Directional_Format: name = "Pop_Directional_Format"; break;
            case unicode::Bidi_Class::Pop_Directional_Isolate: name = "Pop_Directional_Isolate"; break;
            case unicode::Bidi_Class::Right_To_Left: name = "Right_To_Left"; break;
            case unicode::Bidi_Class::Right_To_Left_Embedding: name = "Right_To_Left_Embedding"; break;
            case unicode::Bidi_Class::Right_To_Left_Isolate: name = "Right_To_Left_Isolate"; break;
            case unicode::Bidi_Class::Right_To_Left_Override: name = "Right_To_Left_Override"; break;
            case unicode::Bidi_Class::Segment_Separator: name = "Segment_Separator"; break;
            case unicode::Bidi_Class::White_Space: name = "White_Space"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Bidi_Paired_Bracket_Type>: std::formatter<std::string_view>
{
    auto format(unicode::Bidi_Paired_Bracket_Type value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Bidi_Paired_Bracket_Type::Close: name = "Close"; break;
            case unicode::Bidi_Paired_Bracket_Type::None: name = "None"; break;
            case unicode::Bidi_Paired_Bracket_Type::Open: name = "Open"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Canonical_Combining_Class>: std::formatter<std::string_view>
{
    auto format(unicode::Canonical_Combining_Class value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Canonical_Combining_Class::A: name = "A"; break;
            case unicode::Canonical_Combining_Class::AL: name = "AL"; break;
            case unicode::Canonical_Combining_Class::AR: name = "AR"; break;
            case unicode::Canonical_Combining_Class::ATA: name = "ATA"; break;
            case unicode::Canonical_Combining_Class::ATAR: name = "ATAR"; break;
            case unicode::Canonical_Combining_Class::ATB: name = "ATB"; break;
            case unicode::Canonical_Combining_Class::ATBL: name = "ATBL"; break;
            case unicode::Canonical_Combining_Class::B: name = "B"; break;
            case unicode::Canonical_Combining_Class::BL: name = "BL"; break;
            case unicode::Canonical_Combining_Class::BR: name = "BR"; break;
            case unicode::Canonical_Combining_Class::CCC10: name = "CCC10"; break;
            case unicode::Canonical_Combining_Class::CCC103: name = "CCC103"; break;
            case unicode::Canonical_Combining_Class::CCC107: name = "CCC107"; break;
            case unicode::Canonical_Combining_Class::CCC11: name = "CCC11"; break;
            case unicode::Canonical_Combining_Class::CCC118: name = "CCC118"; break;
            case unicode::Canonical_Combining_Class::CCC12: name = "CCC12"; break;
            case unicode::Canonical_Combining_Class::CCC122: name = "CCC122"; break;
            case unicode::Canonical_Combining_Class::CCC129: name = "CCC129"; break;
            case unicode::Canonical_Combining_Class::CCC13: name = "CCC13"; break;
            case unicode::Canonical_Combining_Class::CCC130: name = "CCC130"; break;
            case unicode::Canonical_Combining_Class::CCC132: name = "CCC132"; break;
            case unicode::Canonical_Combining_Class::CCC133: name = "CCC133"; break;
            case unicode::Canonical_Combining_Class::CCC14: name = "CCC14"; break;
            case unicode::Canonical_Combining_Class::CCC15: name = "CCC15"; break;
            case unicode::Canonical_Combining_Class::CCC16: name = "CCC16"; break;
            case unicode::Canonical_Combining_Class::CCC17: name = "CCC17"; break;
            case unicode::Canonical_Combining_Class::CCC18: name = "CCC18"; break;
            case unicode::Canonical_Combining_Class::CCC19: name = "CCC19"; break;
            case unicode::Canonical_Combining_Class::CCC20: name = "CCC20"; break;
            case unicode::Canonical_Combining_Class::CCC21: name = "CCC21"; break;
            case unicode::Canonical_Combining_Class::CCC22: name = "CCC22"; break;
            case unicode::Canonical_Combining_Class::CCC23: name = "CCC23"; break;
            case unicode::Canonical_Combining_Class::CCC24: name = "CCC24"; break;
            case unicode::Canonical_Combining_Class::CCC25: name = "CCC25"; break;
            case unicode::Canonical_Combining_Class::CCC26: name = "CCC26"; break;
            case unicode::Canonical_Combining_Class::CCC27: name = "CCC27"; break;
            case unicode::Canonical_Combining_Class::CCC28: name = "CCC28"; break;
            case unicode::Canonical_Combining_Class::CCC29: name = "CCC29"; break;
            case unicode::Canonical_Combining_Class::CCC30: name = "CCC30"; break;
            case unicode::Canonical_Combining_Class::CCC31: name = "CCC31"; break;
            case unicode::Canonical_Combining_Class::CCC32: name = "CCC32"; break;
            case unicode::Canonical_Combining_Class::CCC33: name = "CCC33"; break;
            case unicode::Canonical_Combining_Class::CCC34: name = "CCC34"; break;
            case unicode::Canonical_Combining_Class::CCC35: name = "CCC35"; break;
            case unicode::Canonical_Combining_Class::CCC36: name = "CCC36"; break;
            case unicode::Canonical_Combining_Class::CCC84: name = "CCC84"; break;
            case unicode::Canonical_Combining_Class::CCC91: name = "CCC91"; break;
            case unicode::Canonical_Combining_Class::DA: name = "DA"; break;
            case unicode::Canonical_Combining_Class::DB: name = "DB"; break;
            case unicode::Canonical_Combining_Class::HANR: name = "HANR"; break;
            case unicode::Canonical_Combining_Class::IS: name = "IS"; break;
            case unicode::Canonical_Combining_Class::KV: name = "KV"; break;
            case unicode::Canonical_Combining_Class::L: name = "L"; break;
            case unicode::Canonical_Combining_Class::NK: name = "NK"; break;
            case unicode::Canonical_Combining_Class::NR: name = "NR"; break;
            case unicode::Canonical_Combining_Class::OV: name = "OV"; break;
            case unicode::Canonical_Combining_Class::R: name = "R"; break;
            case unicode::Canonical_Combining_Class::VR: name = "VR"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Decomposition_Type>: std::formatter<std::string_view>
{
    auto format(unicode::Decomposition_Type value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Decomposition_Type::Canonical: name = "Canonical"; break;
            case unicode::Decomposition_Type::Circle: name = "Circle"; break;
            case unicode::Decomposition_Type::Compat: name = "Compat"; break;
            case unicode::Decomposition_Type::Final: name = "Final"; break;
            case unicode::Decomposition_Type::Font: name = "Font"; break;
            case unicode::Decomposition_Type::Fraction: name = "Fraction"; break;
            case unicode::Decomposition_Type::Initial: name = "Initial"; break;
            case unicode::Decomposition_Type::Isolated: name = "Isolated"; break;
            case unicode::Decomposition_Type::Medial: name = "Medial"; break;
            case unicode::Decomposition_Type::Narrow: name = "Narrow"; break;
            case unicode::Decomposition_Type::Nobreak: name = "Nobreak"; break;
            case unicode::Decomposition_Type::None: name = "None"; break;
            case unicode::Decomposition_Type::Small: name = "Small"; break;
            case unicode::Decomposition_Type::Square: name = "Square"; break;
            case unicode::Decomposition_Type::Sub: name = "Sub"; break;
            case unicode::Decomposition_Type::Super: name = "Super"; break;
            case unicode::Decomposition_Type::Vertical: name = "Vertical"; break;
            case unicode::Decomposition_Type::Wide: name = "Wide"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::East_Asian_Width>: std::formatter<std::string_view>
{
    auto format(unicode::East_Asian_Width value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::East_Asian_Width::Ambiguous: name = "Ambiguous"; break;
            case unicode::East_Asian_Width::Fullwidth: name = "Fullwidth"; break;
            case unicode::East_Asian_Width::Halfwidth: name = "Halfwidth"; break;
            case unicode::East_Asian_Width::Narrow: name = "Narrow"; break;
            case unicode::East_Asian_Width::Neutral: name = "Neutral"; break;
            case unicode::East_Asian_Width::Wide: name = "Wide"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Grapheme_Cluster_Break>: std::formatter<std::string_view>
{
    auto format(unicode::Grapheme_Cluster_Break value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Grapheme_Cluster_Break::Undefined: name = "Undefined"; break;
            case unicode::Grapheme_Cluster_Break::CR: name = "CR"; break;
            case unicode::Grapheme_Cluster_Break::Control: name = "Control"; break;
            case unicode::Grapheme_Cluster_Break::E_Base: name = "E_Base"; break;
            case unicode::Grapheme_Cluster_Break::E_Base_GAZ: name = "E_Base_GAZ"; break;
            case unicode::Grapheme_Cluster_Break::E_Modifier: name = "E_Modifier"; break;
            case unicode::Grapheme_Cluster_Break::Extend: name = "Extend"; break;
            case unicode::Grapheme_Cluster_Break::Glue_After_Zwj: name = "Glue_After_Zwj"; break;
            case unicode::Grapheme_Cluster_Break::L: name = "L"; break;
            case unicode::Grapheme_Cluster_Break::LF: name = "LF"; break;
            case unicode::Grapheme_Cluster_Break::LV: name = "LV"; break;
            case unicode::Grapheme_Cluster_Break::LVT: name = "LVT"; break;
            case unicode::Grapheme_Cluster_Break::Other: name = "Other"; break;
            case unicode::Grapheme_Cluster_Break::Prepend: name = "Prepend"; break;
            case unicode::Grapheme_Cluster_Break::Regional_Indicator: name = "Regional_Indicator"; break;
            case unicode::Grapheme_Cluster_Break::SpacingMark: name = "SpacingMark"; break;
            case unicode::Grapheme_Cluster_Break::T: name = "T"; break;
            case unicode::Grapheme_Cluster_Break::V: name = "V"; break;
            case unicode::Grapheme_Cluster_Break::ZWJ: name = "ZWJ"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Hangul_Syllable_Type>: std::formatter<std::string_view>
{
    auto format(unicode::Hangul_Syllable_Type value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Hangul_Syllable_Type::LVT_Syllable: name = "LVT_Syllable"; break;
            case unicode::Hangul_Syllable_Type::LV_Syllable: name = "LV_Syllable"; break;
            case unicode::Hangul_Syllable_Type::Leading_Jamo: name = "Leading_Jamo"; break;
            case unicode::Hangul_Syllable_Type::Not_Applicable: name = "Not_Applicable"; break;
            case unicode::Hangul_Syllable_Type::Trailing_Jamo: name = "Trailing_Jamo"; break;
            case unicode::Hangul_Syllable_Type::Vowel_Jamo: name = "Vowel_Jamo"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Indic_Conjunct_Break>: std::formatter<std::string_view>
{
    auto format(unicode::Indic_Conjunct_Break value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Indic_Conjunct_Break::Consonant: name = "Consonant"; break;
            case unicode::Indic_Conjunct_Break::Extend: name = "Extend"; break;
            case unicode::Indic_Conjunct_Break::Linker: name = "Linker"; break;
            case unicode::Indic_Conjunct_Break::None: name = "None"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Indic_Positional_Category>: std::formatter<std::string_view>
{
    auto format(unicode::Indic_Positional_Category value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Indic_Positional_Category::Bottom: name = "Bottom"; break;
            case unicode::Indic_Positional_Category::Bottom_And_Left: name = "Bottom_And_Left"; break;
            case unicode::Indic_Positional_Category::Bottom_And_Right: name = "Bottom_And_Right"; break;
            case unicode::Indic_Positional_Category::Left: name = "Left"; break;
            case unicode::Indic_Positional_Category::Left_And_Right: name = "Left_And_Right"; break;
            case unicode::Indic_Positional_Category::NA: name = "NA"; break;
            case unicode::Indic_Positional_Category::Overstruck: name = "Overstruck"; break;
            case unicode::Indic_Positional_Category::Right: name = "Right"; break;
            case unicode::Indic_Positional_Category::Top: name = "Top"; break;
            case unicode::Indic_Positional_Category::Top_And_Bottom: name = "Top_And_Bottom"; break;
            case unicode::Indic_Positional_Category::Top_And_Bottom_And_Left: name = "Top_And_Bottom_And_Left"; break;
            case unicode::Indic_Positional_Category::Top_And_Bottom_And_Right: name = "Top_And_Bottom_And_Right"; break;
            case unicode::Indic_Positional_Category::Top_And_Left: name = "Top_And_Left"; break;
            case unicode::Indic_Positional_Category::Top_And_Left_And_Right: name = "Top_And_Left_And_Right"; break;
            case unicode::Indic_Positional_Category::Top_And_Right: name = "Top_And_Right"; break;
            case unicode::Indic_Positional_Category::Visual_Order_Left: name = "Visual_Order_Left"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Indic_Syllabic_Category>: std::formatter<std::string_view>
{
    auto format(unicode::Indic_Syllabic_Category value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Indic_Syllabic_Category::Avagraha: name = "Avagraha"; break;
            case unicode::Indic_Syllabic_Category::Bindu: name = "Bindu"; break;
            case unicode::Indic_Syllabic_Category::Brahmi_Joining_Number: name = "Brahmi_Joining_Number"; break;
            case unicode::Indic_Syllabic_Category::Cantillation_Mark: name = "Cantillation_Mark"; break;
            case unicode::Indic_Syllabic_Category::Consonant: name = "Consonant"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Dead: name = "Consonant_Dead"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Final: name = "Consonant_Final"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Head_Letter: name = "Consonant_Head_Letter"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Initial_Postfixed: name = "Consonant_Initial_Postfixed"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Killer: name = "Consonant_Killer"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Medial: name = "Consonant_Medial"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Placeholder: name = "Consonant_Placeholder"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Preceding_Repha: name = "Consonant_Preceding_Repha"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Prefixed: name = "Consonant_Prefixed"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Subjoined: name = "Consonant_Subjoined"; break;
            case unicode::Indic_Syllabic_Category::Consonant_Succeeding_Repha: name = "Consonant_Succeeding_Repha"; break;
            case unicode::Indic_Syllabic_Category::Consonant_With_Stacker: name = "Consonant_With_Stacker"; break;
            case unicode::Indic_Syllabic_Category::Gemination_Mark: name = "Gemination_Mark"; break;
            case unicode::Indic_Syllabic_Category::Invisible_Stacker: name = "Invisible_Stacker"; break;
            case unicode::Indic_Syllabic_Category::Joiner: name = "Joiner"; break;
            case unicode::Indic_Syllabic_Category::Modifying_Letter: name = "Modifying_Letter"; break;
            case unicode::Indic_Syllabic_Category::Non_Joiner: name = "Non_Joiner"; break;
            case unicode::Indic_Syllabic_Category::Nukta: name = "Nukta"; break;
            case unicode::Indic_Syllabic_Category::Number: name = "Number"; break;
            case unicode::Indic_Syllabic_Category::Number_Joiner: name = "Number_Joiner"; break;
            case unicode::Indic_Syllabic_Category::Other: name = "Other"; break;
            case unicode::Indic_Syllabic_Category::Pure_Killer: name = "Pure_Killer"; break;
            case unicode::Indic_Syllabic_Category::Register_Shifter: name = "Register_Shifter"; break;
            case unicode::Indic_Syllabic_Category::Reordering_Killer: name = "Reordering_Killer"; break;
            case unicode::Indic_Syllabic_Category::Syllable_Modifier: name = "Syllable_Modifier"; break;
            case unicode::Indic_Syllabic_Category::Tone_Letter: name = "Tone_Letter"; break;
            case unicode::Indic_Syllabic_Category::Tone_Mark: name = "Tone_Mark"; break;
            case unicode::Indic_Syllabic_Category::Virama: name = "Virama"; break;
            case unicode::Indic_Syllabic_Category::Visarga: name = "Visarga"; break;
            case unicode::Indic_Syllabic_Category::Vowel: name = "Vowel"; break;
            case unicode::Indic_Syllabic_Category::Vowel_Dependent: name = "Vowel_Dependent"; break;
            case unicode::Indic_Syllabic_Category::Vowel_Independent: name = "Vowel_Independent"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Jamo_Short_Name>: std::formatter<std::string_view>
{
    auto format(unicode::Jamo_Short_Name value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Jamo_Short_Name::A: name = "A"; break;
            case unicode::Jamo_Short_Name::AE: name = "AE"; break;
            case unicode::Jamo_Short_Name::B: name = "B"; break;
            case unicode::Jamo_Short_Name::BB: name = "BB"; break;
            case unicode::Jamo_Short_Name::BS: name = "BS"; break;
            case unicode::Jamo_Short_Name::C: name = "C"; break;
            case unicode::Jamo_Short_Name::D: name = "D"; break;
            case unicode::Jamo_Short_Name::DD: name = "DD"; break;
            case unicode::Jamo_Short_Name::E: name = "E"; break;
            case unicode::Jamo_Short_Name::EO: name = "EO"; break;
            case unicode::Jamo_Short_Name::EU: name = "EU"; break;
            case unicode::Jamo_Short_Name::G: name = "G"; break;
            case unicode::Jamo_Short_Name::GG: name = "GG"; break;
            case unicode::Jamo_Short_Name::GS: name = "GS"; break;
            case unicode::Jamo_Short_Name::H: name = "H"; break;
            case unicode::Jamo_Short_Name::I: name = "I"; break;
            case unicode::Jamo_Short_Name::J: name = "J"; break;
            case unicode::Jamo_Short_Name::JJ: name = "JJ"; break;
            case unicode::Jamo_Short_Name::K: name = "K"; break;
            case unicode::Jamo_Short_Name::L: name = "L"; break;
            case unicode::Jamo_Short_Name::LB: name = "LB"; break;
            case unicode::Jamo_Short_Name::LG: name = "LG"; break;
            case unicode::Jamo_Short_Name::LH: name = "LH"; break;
            case unicode::Jamo_Short_Name::LM: name = "LM"; break;
            case unicode::Jamo_Short_Name::LP: name = "LP"; break;
            case unicode::Jamo_Short_Name::LS: name = "LS"; break;
            case unicode::Jamo_Short_Name::LT: name = "LT"; break;
            case unicode::Jamo_Short_Name::M: name = "M"; break;
            case unicode::Jamo_Short_Name::N: name = "N"; break;
            case unicode::Jamo_Short_Name::NG: name = "NG"; break;
            case unicode::Jamo_Short_Name::NH: name = "NH"; break;
            case unicode::Jamo_Short_Name::NJ: name = "NJ"; break;
            case unicode::Jamo_Short_Name::O: name = "O"; break;
            case unicode::Jamo_Short_Name::OE: name = "OE"; break;
            case unicode::Jamo_Short_Name::P: name = "P"; break;
            case unicode::Jamo_Short_Name::R: name = "R"; break;
            case unicode::Jamo_Short_Name::S: name = "S"; break;
            case unicode::Jamo_Short_Name::SS: name = "SS"; break;
            case unicode::Jamo_Short_Name::T: name = "T"; break;
            case unicode::Jamo_Short_Name::U: name = "U"; break;
            case unicode::Jamo_Short_Name::WA: name = "WA"; break;
            case unicode::Jamo_Short_Name::WAE: name = "WAE"; break;
            case unicode::Jamo_Short_Name::WE: name = "WE"; break;
            case unicode::Jamo_Short_Name::WEO: name = "WEO"; break;
            case unicode::Jamo_Short_Name::WI: name = "WI"; break;
            case unicode::Jamo_Short_Name::YA: name = "YA"; break;
            case unicode::Jamo_Short_Name::YAE: name = "YAE"; break;
            case unicode::Jamo_Short_Name::YE: name = "YE"; break;
            case unicode::Jamo_Short_Name::YEO: name = "YEO"; break;
            case unicode::Jamo_Short_Name::YI: name = "YI"; break;
            case unicode::Jamo_Short_Name::YO: name = "YO"; break;
            case unicode::Jamo_Short_Name::YU: name = "YU"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Joining_Group>: std::formatter<std::string_view>
{
    auto format(unicode::Joining_Group value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Joining_Group::African_Feh: name = "African_Feh"; break;
            case unicode::Joining_Group::African_Noon: name = "African_Noon"; break;
            case unicode::Joining_Group::African_Qaf: name = "African_Qaf"; break;
            case unicode::Joining_Group::Ain: name = "Ain"; break;
            case unicode::Joining_Group::Alaph: name = "Alaph"; break;
            case unicode::Joining_Group::Alef: name = "Alef"; break;
            case unicode::Joining_Group::Beh: name = "Beh"; break;
            case unicode::Joining_Group::Beth: name = "Beth"; break;
            case unicode::Joining_Group::Burushaski_Yeh_Barree: name = "Burushaski_Yeh_Barree"; break;
            case unicode::Joining_Group::Dal: name = "Dal"; break;
            case unicode::Joining_Group::Dalath_Rish: name = "Dalath_Rish"; break;
            case unicode::Joining_Group::E: name = "E"; break;
            case unicode::Joining_Group::Farsi_Yeh: name = "Farsi_Yeh"; break;
            case unicode::Joining_Group::Fe: name = "Fe"; break;
            case unicode::Joining_Group::Feh: name = "Feh"; break;
            case unicode::Joining_Group::Final_Semkath: name = "Final_Semkath"; break;
            case unicode::Joining_Group::Gaf: name = "Gaf"; break;
            case unicode::Joining_Group::Gamal: name = "Gamal"; break;
            case unicode::Joining_Group::Hah: name = "Hah"; break;
            case unicode::Joining_Group::Hanifi_Rohingya_Kinna_Ya: name = "Hanifi_Rohingya_Kinna_Ya"; break;
            case unicode::Joining_Group::Hanifi_Rohingya_Pa: name = "Hanifi_Rohingya_Pa"; break;
            case unicode::Joining_Group::He: name = "He"; break;
            case unicode::Joining_Group::Heh: name = "Heh"; break;
            case unicode::Joining_Group::Heh_Goal: name = "Heh_Goal"; break;
            case unicode::Joining_Group::Heth: name = "Heth"; break;
            case unicode::Joining_Group::Kaf: name = "Kaf"; break;
            case unicode::Joining_Group::Kaph: name = "Kaph"; break;
            case unicode::Joining_Group::Kashmiri_Yeh: name = "Kashmiri_Yeh"; break;
            case unicode::Joining_Group::Khaph: name = "Khaph"; break;
            case unicode::Joining_Group::Knotted_Heh: name = "Knotted_Heh"; break;
            case unicode::Joining_Group::Lam: name = "Lam"; break;
            case unicode::Joining_Group::Lamadh: name = "Lamadh"; break;
            case unicode::Joining_Group::Malayalam_Bha: name = "Malayalam_Bha"; break;
            case unicode::Joining_Group::Malayalam_Ja: name = "Malayalam_Ja"; break;
            case unicode::Joining_Group::Malayalam_Lla: name = "Malayalam_Lla"; break;
            case unicode::Joining_Group::Malayalam_Llla: name = "Malayalam_Llla"; break;
            case unicode::Joining_Group::Malayalam_Nga: name = "Malayalam_Nga"; break;
            case unicode::Joining_Group::Malayalam_Nna: name = "Malayalam_Nna"; break;
            case unicode::Joining_Group::Malayalam_Nnna: name = "Malayalam_Nnna"; break;
            case unicode::Joining_Group::Malayalam_Nya: name = "Malayalam_Nya"; break;
            case unicode::Joining_Group::Malayalam_Ra: name = "Malayalam_Ra"; break;
            case unicode::Joining_Group::Malayalam_Ssa: name = "Malayalam_Ssa"; break;
            case unicode::Joining_Group::Malayalam_Tta: name = "Malayalam_Tta"; break;
            case unicode::Joining_Group::Manichaean_Aleph: name = "Manichaean_Aleph"; break;
            case unicode::Joining_Group::Manichaean_Ayin: name = "Manichaean_Ayin"; break;
            case unicode::Joining_Group::Manichaean_Beth: name = "Manichaean_Beth"; break;
            case unicode::Joining_Group::Manichaean_Daleth: name = "Manichaean_Daleth"; break;
            case unicode::Joining_Group::Manichaean_Dhamedh: name = "Manichaean_Dhamedh"; break;
            case unicode::Joining_Group::Manichaean_Five: name = "Manichaean_Five"; break;
            case unicode::Joining_Group::Manichaean_Gimel: name = "Manichaean_Gimel"; break;
            case unicode::Joining_Group::Manichaean_Heth: name = "Manichaean_Heth"; break;
            case unicode::Joining_Group::Manichaean_Hundred: name = "Manichaean_Hundred"; break;
            case unicode::Joining_Group::Manichaean_Kaph: name = "Manichaean_Kaph"; break;
            case unicode::Joining_Group::Manichaean_Lamedh: name = "Manichaean_Lamedh"; break;
            case unicode::Joining_Group::Manichaean_Mem: name = "Manichaean_Mem"; break;
            case unicode::Joining_Group::Manichaean_Nun: name = "Manichaean_Nun"; break;
            case unicode::Joining_Group::Manichaean_One: name = "Manichaean_One"; break;
            case unicode::Joining_Group::Manichaean_Pe: name = "Manichaean_Pe"; break;
            case unicode::Joining_Group::Manichaean_Qoph: name = "Manichaean_Qoph"; break;
            case unicode::Joining_Group::Manichaean_Resh: name = "Manichaean_Resh"; break;
            case unicode::Joining_Group::Manichaean_Sadhe: name = "Manichaean_Sadhe"; break;
            case unicode::Joining_Group::Manichaean_Samekh: name = "Manichaean_Samekh"; break;
            case unicode::Joining_Group::Manichaean_Taw: name = "Manichaean_Taw"; break;
            case unicode::Joining_Group::Manichaean_Ten: name = "Manichaean_Ten"; break;
            case unicode::Joining_Group::Manichaean_Teth: name = "Manichaean_Teth"; break;
            case unicode::Joining_Group::Manichaean_Thamedh: name = "Manichaean_Thamedh"; break;
            case unicode::Joining_Group::Manichaean_Twenty: name = "Manichaean_Twenty"; break;
            case unicode::Joining_Group::Manichaean_Waw: name = "Manichaean_Waw"; break;
            case unicode::Joining_Group::Manichaean_Yodh: name = "Manichaean_Yodh"; break;
            case unicode::Joining_Group::Manichaean_Zayin: name = "Manichaean_Zayin"; break;
            case unicode::Joining_Group::Meem: name = "Meem"; break;
            case unicode::Joining_Group::Mim: name = "Mim"; break;
            case unicode::Joining_Group::No_Joining_Group: name = "No_Joining_Group"; break;
            case unicode::Joining_Group::Noon: name = "Noon"; break;
            case unicode::Joining_Group::Nun: name = "Nun"; break;
            case unicode::Joining_Group::Nya: name = "Nya"; break;
            case unicode::Joining_Group::Pe: name = "Pe"; break;
            case unicode::Joining_Group::Qaf: name = "Qaf"; break;
            case unicode::Joining_Group::Qaph: name = "Qaph"; break;
            case unicode::Joining_Group::Reh: name = "Reh"; break;
            case unicode::Joining_Group::Reversed_Pe: name = "Reversed_Pe"; break;
            case unicode::Joining_Group::Rohingya_Yeh: name = "Rohingya_Yeh"; break;
            case unicode::Joining_Group::Sad: name = "Sad"; break;
            case unicode::Joining_Group::Sadhe: name = "Sadhe"; break;
            case unicode::Joining_Group::Seen: name = "Seen"; break;
            case unicode::Joining_Group::Semkath: name = "Semkath"; break;
            case unicode::Joining_Group::Shin: name = "Shin"; break;
            case unicode::Joining_Group::Straight_Waw: name = "Straight_Waw"; break;
            case unicode::Joining_Group::Swash_Kaf: name = "Swash_Kaf"; break;
            case unicode::Joining_Group::Syriac_Waw: name = "Syriac_Waw"; break;
            case unicode::Joining_Group::Tah: name = "Tah"; break;
            case unicode::Joining_Group::Taw: name = "Taw"; break;
            case unicode::Joining_Group::Teh_Marbuta: name = "Teh_Marbuta"; break;
            case unicode::Joining_Group::Teh_Marbuta_Goal: name = "Teh_Marbuta_Goal"; break;
            case unicode::Joining_Group::Teth: name = "Teth"; break;
            case unicode::Joining_Group::Thin_Yeh: name = "Thin_Yeh"; break;
            case unicode::Joining_Group::Vertical_Tail: name = "Vertical_Tail"; break;
            case unicode::Joining_Group::Waw: name = "Waw"; break;
            case unicode::Joining_Group::Yeh: name = "Yeh"; break;
            case unicode::Joining_Group::Yeh_Barree: name = "Yeh_Barree"; break;
            case unicode::Joining_Group::Yeh_With_Tail: name = "Yeh_With_Tail"; break;
            case unicode::Joining_Group::Yudh: name = "Yudh"; break;
            case unicode::Joining_Group::Yudh_He: name = "Yudh_He"; break;
            case unicode::Joining_Group::Zain: name = "Zain"; break;
            case unicode::Joining_Group::Zhain: name = "Zhain"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Joining_Type>: std::formatter<std::string_view>
{
    auto format(unicode::Joining_Type value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Joining_Type::Dual_Joining: name = "Dual_Joining"; break;
            case unicode::Joining_Type::Join_Causing: name = "Join_Causing"; break;
            case unicode::Joining_Type::Left_Joining: name = "Left_Joining"; break;
            case unicode::Joining_Type::Non_Joining: name = "Non_Joining"; break;
            case unicode::Joining_Type::Right_Joining: name = "Right_Joining"; break;
            case unicode::Joining_Type::Transparent: name = "Transparent"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Line_Break>: std::formatter<std::string_view>
{
    auto format(unicode::Line_Break value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Line_Break::Aksara: name = "Aksara"; break;
            case unicode::Line_Break::Aksara_Prebase: name = "Aksara_Prebase"; break;
            case unicode::Line_Break::Aksara_Start: name = "Aksara_Start"; break;
            case unicode::Line_Break::Alphabetic: name = "Alphabetic"; break;
            case unicode::Line_Break::Ambiguous: name = "Ambiguous"; break;
            case unicode::Line_Break::Break_After: name = "Break_After"; break;
            case unicode::Line_Break::Break_Before: name = "Break_Before"; break;
            case unicode::Line_Break::Break_Both: name = "Break_Both"; break;
            case unicode::Line_Break::Break_Symbols: name = "Break_Symbols"; break;
            case unicode::Line_Break::Carriage_Return: name = "Carriage_Return"; break;
            case unicode::Line_Break::Close_Parenthesis: name = "Close_Parenthesis"; break;
            case unicode::Line_Break::Close_Punctuation: name = "Close_Punctuation"; break;
            case unicode::Line_Break::Combining_Mark: name = "Combining_Mark"; break;
            case unicode::Line_Break::Complex_Context: name = "Complex_Context"; break;
            case unicode::Line_Break::Conditional_Japanese_Starter: name = "Conditional_Japanese_Starter"; break;
            case unicode::Line_Break::Contingent_Break: name = "Contingent_Break"; break;
            case unicode::Line_Break::E_Base: name = "E_Base"; break;
            case unicode::Line_Break::E_Modifier: name = "E_Modifier"; break;
            case unicode::Line_Break::Exclamation: name = "Exclamation"; break;
            case unicode::Line_Break::Glue: name = "Glue"; break;
            case unicode::Line_Break::H2: name = "H2"; break;
            case unicode::Line_Break::H3: name = "H3"; break;
            case unicode::Line_Break::Hebrew_Letter: name = "Hebrew_Letter"; break;
            case unicode::Line_Break::Hyphen: name = "Hyphen"; break;
            case unicode::Line_Break::Ideographic: name = "Ideographic"; break;
            case unicode::Line_Break::Infix_Numeric: name = "Infix_Numeric"; break;
            case unicode::Line_Break::Inseparable: name = "Inseparable"; break;
            case unicode::Line_Break::JL: name = "JL"; break;
            case unicode::Line_Break::JT: name = "JT"; break;
            case unicode::Line_Break::JV: name = "JV"; break;
            case unicode::Line_Break::Line_Feed: name = "Line_Feed"; break;
            case unicode::Line_Break::Mandatory_Break: name = "Mandatory_Break"; break;
            case unicode::Line_Break::Next_Line: name = "Next_Line"; break;
            case unicode::Line_Break::Nonstarter: name = "Nonstarter"; break;
            case unicode::Line_Break::Numeric: name = "Numeric"; break;
            case unicode::Line_Break::Open_Punctuation: name = "Open_Punctuation"; break;
            case unicode::Line_Break::Postfix_Numeric: name = "Postfix_Numeric"; break;
            case unicode::Line_Break::Prefix_Numeric: name = "Prefix_Numeric"; break;
            case unicode::Line_Break::Quotation: name = "Quotation"; break;
            case unicode::Line_Break::Regional_Indicator: name = "Regional_Indicator"; break;
            case unicode::Line_Break::Space: name = "Space"; break;
            case unicode::Line_Break::Surrogate: name = "Surrogate"; break;
            case unicode::Line_Break::Unknown: name = "Unknown"; break;
            case unicode::Line_Break::Virama: name = "Virama"; break;
            case unicode::Line_Break::Virama_Final: name = "Virama_Final"; break;
            case unicode::Line_Break::Word_Joiner: name = "Word_Joiner"; break;
            case unicode::Line_Break::ZWJ: name = "ZWJ"; break;
            case unicode::Line_Break::ZWSpace: name = "ZWSpace"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::NFC_Quick_Check>: std::formatter<std::string_view>
{
    auto format(unicode::NFC_Quick_Check value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::NFC_Quick_Check::Maybe: name = "Maybe"; break;
            case unicode::NFC_Quick_Check::No: name = "No"; break;
            case unicode::NFC_Quick_Check::Yes: name = "Yes"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::NFKC_Quick_Check>: std::formatter<std::string_view>
{
    auto format(unicode::NFKC_Quick_Check value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::NFKC_Quick_Check::Maybe: name = "Maybe"; break;
            case unicode::NFKC_Quick_Check::No: name = "No"; break;
            case unicode::NFKC_Quick_Check::Yes: name = "Yes"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Numeric_Type>: std::formatter<std::string_view>
{
    auto format(unicode::Numeric_Type value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Numeric_Type::Decimal: name = "Decimal"; break;
            case unicode::Numeric_Type::Digit: name = "Digit"; break;
            case unicode::Numeric_Type::None: name = "None"; break;
            case unicode::Numeric_Type::Numeric: name = "Numeric"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Sentence_Break>: std::formatter<std::string_view>
{
    auto format(unicode::Sentence_Break value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Sentence_Break::ATerm: name = "ATerm"; break;
            case unicode::Sentence_Break::CR: name = "CR"; break;
            case unicode::Sentence_Break::Close: name = "Close"; break;
            case unicode::Sentence_Break::Extend: name = "Extend"; break;
            case unicode::Sentence_Break::Format: name = "Format"; break;
            case unicode::Sentence_Break::LF: name = "LF"; break;
            case unicode::Sentence_Break::Lower: name = "Lower"; break;
            case unicode::Sentence_Break::Numeric: name = "Numeric"; break;
            case unicode::Sentence_Break::OLetter: name = "OLetter"; break;
            case unicode::Sentence_Break::Other: name = "Other"; break;
            case unicode::Sentence_Break::SContinue: name = "SContinue"; break;
            case unicode::Sentence_Break::STerm: name = "STerm"; break;
            case unicode::Sentence_Break::Sep: name = "Sep"; break;
            case unicode::Sentence_Break::Sp: name = "Sp"; break;
            case unicode::Sentence_Break::Upper: name = "Upper"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Vertical_Orientation>: std::formatter<std::string_view>
{
    auto format(unicode::Vertical_Orientation value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Vertical_Orientation::Rotated: name = "Rotated"; break;
            case unicode::Vertical_Orientation::Transformed_Rotated: name = "Transformed_Rotated"; break;
            case unicode::Vertical_Orientation::Transformed_Upright: name = "Transformed_Upright"; break;
            case unicode::Vertical_Orientation::Upright: name = "Upright"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Word_Break>: std::formatter<std::string_view>
{
    auto format(unicode::Word_Break value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Word_Break::ALetter: name = "ALetter"; break;
            case unicode::Word_Break::CR: name = "CR"; break;
            case unicode::Word_Break::Double_Quote: name = "Double_Quote"; break;
            case unicode::Word_Break::E_Base: name = "E_Base"; break;
            case unicode::Word_Break::E_Base_GAZ: name = "E_Base_GAZ"; break;
            case unicode::Word_Break::E_Modifier: name = "E_Modifier"; break;
            case unicode::Word_Break::Extend: name = "Extend"; break;
            case unicode::Word_Break::ExtendNumLet: name = "ExtendNumLet"; break;
            case unicode::Word_Break::Format: name = "Format"; break;
            case unicode::Word_Break::Glue_After_Zwj: name = "Glue_After_Zwj"; break;
            case unicode::Word_Break::Hebrew_Letter: name = "Hebrew_Letter"; break;
            case unicode::Word_Break::Katakana: name = "Katakana"; break;
            case unicode::Word_Break::LF: name = "LF"; break;
            case unicode::Word_Break::MidLetter: name = "MidLetter"; break;
            case unicode::Word_Break::MidNum: name = "MidNum"; break;
            case unicode::Word_Break::MidNumLet: name = "MidNumLet"; break;
            case unicode::Word_Break::Newline: name = "Newline"; break;
            case unicode::Word_Break::Numeric: name = "Numeric"; break;
            case unicode::Word_Break::Other: name = "Other"; break;
            case unicode::Word_Break::Regional_Indicator: name = "Regional_Indicator"; break;
            case unicode::Word_Break::Single_Quote: name = "Single_Quote"; break;
            case unicode::Word_Break::WSegSpace: name = "WSegSpace"; break;
            case unicode::Word_Break::ZWJ: name = "ZWJ"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Core_Property>: std::formatter<std::string_view>
{
    auto format(unicode::Core_Property value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Core_Property::Alphabetic: name = "Alphabetic"; break;
            case unicode::Core_Property::Case_Ignorable: name = "Case_Ignorable"; break;
            case unicode::Core_Property::Cased: name = "Cased"; break;
            case unicode::Core_Property::Changes_When_Casefolded: name = "Changes_When_Casefolded"; break;
            case unicode::Core_Property::Changes_When_Casemapped: name = "Changes_When_Casemapped"; break;
            case unicode::Core_Property::Changes_When_Lowercased: name = "Changes_When_Lowercased"; break;
            case unicode::Core_Property::Changes_When_Titlecased: name = "Changes_When_Titlecased"; break;
            case unicode::Core_Property::Changes_When_Uppercased: name = "Changes_When_Uppercased"; break;
            case unicode::Core_Property::Default_Ignorable_Code_Point: name = "Default_Ignorable_Code_Point"; break;
            case unicode::Core_Property::Grapheme_Base: name = "Grapheme_Base"; break;
            case unicode::Core_Property::Grapheme_Extend: name = "Grapheme_Extend"; break;
            case unicode::Core_Property::Grapheme_Link: name = "Grapheme_Link"; break;
            case unicode::Core_Property::ID_Continue: name = "ID_Continue"; break;
            case unicode::Core_Property::ID_Start: name = "ID_Start"; break;
            case unicode::Core_Property::Lowercase: name = "Lowercase"; break;
            case unicode::Core_Property::Math: name = "Math"; break;
            case unicode::Core_Property::Uppercase: name = "Uppercase"; break;
            case unicode::Core_Property::XID_Continue: name = "XID_Continue"; break;
            case unicode::Core_Property::XID_Start: name = "XID_Start"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::General_Category>: std::formatter<std::string_view>
{
    auto format(unicode::General_Category value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::General_Category::Unspecified: name = "Unspecified"; break;
            case unicode::General_Category::Close_Punctuation: name = "Close_Punctuation"; break;
            case unicode::General_Category::Connector_Punctuation: name = "Connector_Punctuation"; break;
            case unicode::General_Category::Control: name = "Control"; break;
            case unicode::General_Category::Currency_Symbol: name = "Currency_Symbol"; break;
            case unicode::General_Category::Dash_Punctuation: name = "Dash_Punctuation"; break;
            case unicode::General_Category::Decimal_Number: name = "Decimal_Number"; break;
            case unicode::General_Category::Enclosing_Mark: name = "Enclosing_Mark"; break;
            case unicode::General_Category::Final_Punctuation: name = "Final_Punctuation"; break;
            case unicode::General_Category::Format: name = "Format"; break;
            case unicode::General_Category::Initial_Punctuation: name = "Initial_Punctuation"; break;
            case unicode::General_Category::Letter_Number: name = "Letter_Number"; break;
            case unicode::General_Category::Line_Separator: name = "Line_Separator"; break;
            case unicode::General_Category::Lowercase_Letter: name = "Lowercase_Letter"; break;
            case unicode::General_Category::Math_Symbol: name = "Math_Symbol"; break;
            case unicode::General_Category::Modifier_Letter: name = "Modifier_Letter"; break;
            case unicode::General_Category::Modifier_Symbol: name = "Modifier_Symbol"; break;
            case unicode::General_Category::Nonspacing_Mark: name = "Nonspacing_Mark"; break;
            case unicode::General_Category::Open_Punctuation: name = "Open_Punctuation"; break;
            case unicode::General_Category::Other_Letter: name = "Other_Letter"; break;
            case unicode::General_Category::Other_Number: name = "Other_Number"; break;
            case unicode::General_Category::Other_Punctuation: name = "Other_Punctuation"; break;
            case unicode::General_Category::Other_Symbol: name = "Other_Symbol"; break;
            case unicode::General_Category::Paragraph_Separator: name = "Paragraph_Separator"; break;
            case unicode::General_Category::Private_Use: name = "Private_Use"; break;
            case unicode::General_Category::Space_Separator: name = "Space_Separator"; break;
            case unicode::General_Category::Spacing_Mark: name = "Spacing_Mark"; break;
            case unicode::General_Category::Surrogate: name = "Surrogate"; break;
            case unicode::General_Category::Titlecase_Letter: name = "Titlecase_Letter"; break;
            case unicode::General_Category::Unassigned: name = "Unassigned"; break;
            case unicode::General_Category::Uppercase_Letter: name = "Uppercase_Letter"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Script>: std::formatter<std::string_view>
{
    auto format(unicode::Script value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Script::Invalid: name = "Invalid"; break;
            case unicode::Script::Unknown: name = "Unknown"; break;
            case unicode::Script::Common: name = "Common"; break;
            case unicode::Script::Adlam: name = "Adlam"; break;
            case unicode::Script::Ahom: name = "Ahom"; break;
            case unicode::Script::Anatolian_Hieroglyphs: name = "Anatolian_Hieroglyphs"; break;
            case unicode::Script::Arabic: name = "Arabic"; break;
            case unicode::Script::Armenian: name = "Armenian"; break;
            case unicode::Script::Avestan: name = "Avestan"; break;
            case unicode::Script::Balinese: name = "Balinese"; break;
            case unicode::Script::Bamum: name = "Bamum"; break;
            case unicode::Script::Bassa_Vah: name = "Bassa_Vah"; break;
            case unicode::Script::Batak: name = "Batak"; break;
            case unicode::Script::Bengali: name = "Bengali"; break;
            case unicode::Script::Bhaiksuki: name = "Bhaiksuki"; break;
            case unicode::Script::Bopomofo: name = "Bopomofo"; break;
            case unicode::Script::Brahmi: name = "Brahmi"; break;
            case unicode::Script::Braille: name = "Braille"; break;
            case unicode::Script::Buginese: name = "Buginese"; break;
            case unicode::Script::Buhid: name = "Buhid"; break;
            case unicode::Script::Canadian_Aboriginal: name = "Canadian_Aboriginal"; break;
            case unicode::Script::Carian: name = "Carian"; break;
            case unicode::Script::Caucasian_Albanian: name = "Caucasian_Albanian"; break;
            case unicode::Script::Chakma: name = "Chakma"; break;
            case unicode::Script::Cham: name = "Cham"; break;
            case unicode::Script::Cherokee: name = "Cherokee"; break;
            case unicode::Script::Chorasmian: name = "Chorasmian"; break;
            case unicode::Script::Coptic: name = "Coptic"; break;
            case unicode::Script::Cuneiform: name = "Cuneiform"; break;
            case unicode::Script::Cypriot: name = "Cypriot"; break;
            case unicode::Script::Cypro_Minoan: name = "Cypro_Minoan"; break;
            case unicode::Script::Cyrillic: name = "Cyrillic"; break;
            case unicode::Script::Deseret: name = "Deseret"; break;
            case unicode::Script::Devanagari: name = "Devanagari"; break;
            case unicode::Script::Dives_Akuru: name = "Dives_Akuru"; break;
            case unicode::Script::Dogra: name = "Dogra"; break;
            case unicode::Script::Duployan: name = "Duployan"; break;
            case unicode::Script::Egyptian_Hieroglyphs: name = "Egyptian_Hieroglyphs"; break;
            case unicode::Script::Elbasan: name = "Elbasan"; break;
            case unicode::Script::Elymaic: name = "Elymaic"; break;
            case unicode::Script::Ethiopic: name = "Ethiopic"; break;
            case unicode::Script::Garay: name = "Garay"; break;
            case unicode::Script::Georgian: name = "Georgian"; break;
            case unicode::Script::Glagolitic: name = "Glagolitic"; break;
            case unicode::Script::Gothic: name = "Gothic"; break;
            case unicode::Script::Grantha: name = "Grantha"; break;
            case unicode::Script::Greek: name = "Greek"; break;
            case unicode::Script::Gujarati: name = "Gujarati"; break;
            case unicode::Script::Gunjala_Gondi: name = "Gunjala_Gondi"; break;
            case unicode::Script::Gurmukhi: name = "Gurmukhi"; break;
            case unicode::Script::Gurung_Khema: name = "Gurung_Khema"; break;
            case unicode::Script::Han: name = "Han"; break;
            case unicode::Script::Hangul: name = "Hangul"; break;
            case unicode::Script::Hanifi_Rohingya: name = "Hanifi_Rohingya"; break;
            case unicode::Script::Hanunoo: name = "Hanunoo"; break;
            case unicode::Script::Hatran: name = "Hatran"; break;
            case unicode::Script::Hebrew: name = "Hebrew"; break;
            case unicode::Script::Hiragana: name = "Hiragana"; break;
            case unicode::Script::Imperial_Aramaic: name = "Imperial_Aramaic"; break;
            case unicode::Script::Inherited: name = "Inherited"; break;
            case unicode::Script::Inscriptional_Pahlavi: name = "Inscriptional_Pahlavi"; break;
            case unicode::Script::Inscriptional_Parthian: name = "Inscriptional_Parthian"; break;
            case unicode::Script::Javanese: name = "Javanese"; break;
            case unicode::Script::Kaithi: name = "Kaithi"; break;
            case unicode::Script::Kannada: name = "Kannada"; break;
            case unicode::Script::Katakana: name = "Katakana"; break;
            case unicode::Script::Kawi: name = "Kawi"; break;
            case unicode::Script::Kayah_Li: name = "Kayah_Li"; break;
            case unicode::Script::Kharoshthi: name = "Kharoshthi"; break;
            case unicode::Script::Khitan_Small_Script: name = "Khitan_Small_Script"; break;
            case unicode::Script::Khmer: name = "Khmer"; break;
            case unicode::Script::Khojki: name = "Khojki"; break;
            case unicode::Script::Khudawadi: name = "Khudawadi"; break;
            case unicode::Script::Kirat_Rai: name = "Kirat_Rai"; break;
            case unicode::Script::Lao: name = "Lao"; break;
            case unicode::Script::Latin: name = "Latin"; break;
            case unicode::Script::Lepcha: name = "Lepcha"; break;
            case unicode::Script::Limbu: name = "Limbu"; break;
            case unicode::Script::Linear_A: name = "Linear_A"; break;
            case unicode::Script::Linear_B: name = "Linear_B"; break;
            case unicode::Script::Lisu: name = "Lisu"; break;
            case unicode::Script::Lycian: name = "Lycian"; break;
            case unicode::Script::Lydian: name = "Lydian"; break;
            case unicode::Script::Mahajani: name = "Mahajani"; break;
            case unicode::Script::Makasar: name = "Makasar"; break;
            case unicode::Script::Malayalam: name = "Malayalam"; break;
            case unicode::Script::Mandaic: name = "Mandaic"; break;
            case unicode::Script::Manichaean: name = "Manichaean"; break;
            case unicode::Script::Marchen: name = "Marchen"; break;
            case unicode::Script::Masaram_Gondi: name = "Masaram_Gondi"; break;
            case unicode::Script::Medefaidrin: name = "Medefaidrin"; break;
            case unicode::Script::Meetei_Mayek: name = "Meetei_Mayek"; break;
            case unicode::Script::Mende_Kikakui: name = "Mende_Kikakui"; break;
            case unicode::Script::Meroitic_Cursive: name = "Meroitic_Cursive"; break;
            case unicode::Script::Meroitic_Hieroglyphs: name = "Meroitic_Hieroglyphs"; break;
            case unicode::Script::Miao: name = "Miao"; break;
            case unicode::Script::Modi: name = "Modi"; break;
            case unicode::Script::Mongolian: name = "Mongolian"; break;
            case unicode::Script::Mro: name = "Mro"; break;
            case unicode::Script::Multani: name = "Multani"; break;
            case unicode::Script::Myanmar: name = "Myanmar"; break;
            case unicode::Script::Nabataean: name = "Nabataean"; break;
            case unicode::Script::Nag_Mundari: name = "Nag_Mundari"; break;
            case unicode::Script::Nandinagari: name = "Nandinagari"; break;
            case unicode::Script::New_Tai_Lue: name = "New_Tai_Lue"; break;
            case unicode::Script::Newa: name = "Newa"; break;
            case unicode::Script::Nko: name = "Nko"; break;
            case unicode::Script::Nushu: name = "Nushu"; break;
            case unicode::Script::Nyiakeng_Puachue_Hmong: name = "Nyiakeng_Puachue_Hmong"; break;
            case unicode::Script::Ogham: name = "Ogham"; break;
            case unicode::Script::Ol_Chiki: name = "Ol_Chiki"; break;
            case unicode::Script::Ol_Onal: name = "Ol_Onal"; break;
            case unicode::Script::Old_Hungarian: name = "Old_Hungarian"; break;
            case unicode::Script::Old_Italic: name = "Old_Italic"; break;
            case unicode::Script::Old_North_Arabian: name = "Old_North_Arabian"; break;
            case unicode::Script::Old_Permic: name = "Old_Permic"; break;
            case unicode::Script::Old_Persian: name = "Old_Persian"; break;
            case unicode::Script::Old_Sogdian: name = "Old_Sogdian"; break;
            case unicode::Script::Old_South_Arabian: name = "Old_South_Arabian"; break;
            case unicode::Script::Old_Turkic: name = "Old_Turkic"; break;
            case unicode::Script::Old_Uyghur: name = "Old_Uyghur"; break;
            case unicode::Script::Oriya: name = "Oriya"; break;
            case unicode::Script::Osage: name = "Osage"; break;
            case unicode::Script::Osmanya: name = "Osmanya"; break;
            case unicode::Script::Pahawh_Hmong: name = "Pahawh_Hmong"; break;
            case unicode::Script::Palmyrene: name = "Palmyrene"; break;
            case unicode::Script::Pau_Cin_Hau: name = "Pau_Cin_Hau"; break;
            case unicode::Script::Phags_Pa: name = "Phags_Pa"; break;
            case unicode::Script::Phoenician: name = "Phoenician"; break;
            case unicode::Script::Psalter_Pahlavi: name = "Psalter_Pahlavi"; break;
            case unicode::Script::Rejang: name = "Rejang"; break;
            case unicode::Script::Runic: name = "Runic"; break;
            case unicode::Script::Samaritan: name = "Samaritan"; break;
            case unicode::Script::Saurashtra: name = "Saurashtra"; break;
            case unicode::Script::Sharada: name = "Sharada"; break;
            case unicode::Script::Shavian: name = "Shavian"; break;
            case unicode::Script::Siddham: name = "Siddham"; break;
            case unicode::Script::SignWriting: name = "SignWriting"; break;
            case unicode::Script::Sinhala: name = "Sinhala"; break;
            case unicode::Script::Sogdian: name = "Sogdian"; break;
            case unicode::Script::Sora_Sompeng: name = "Sora_Sompeng"; break;
            case unicode::Script::Soyombo: name = "Soyombo"; break;
            case unicode::Script::Sundanese: name = "Sundanese"; break;
            case unicode::Script::Sunuwar: name = "Sunuwar"; break;
            case unicode::Script::Syloti_Nagri: name = "Syloti_Nagri"; break;
            case unicode::Script::Syriac: name = "Syriac"; break;
            case unicode::Script::Tagalog: name = "Tagalog"; break;
            case unicode::Script::Tagbanwa: name = "Tagbanwa"; break;
            case unicode::Script::Tai_Le: name = "Tai_Le"; break;
            case unicode::Script::Tai_Tham: name = "Tai_Tham"; break;
            case unicode::Script::Tai_Viet: name = "Tai_Viet"; break;
            case unicode::Script::Takri: name = "Takri"; break;
            case unicode::Script::Tamil: name = "Tamil"; break;
            case unicode::Script::Tangsa: name = "Tangsa"; break;
            case unicode::Script::Tangut: name = "Tangut"; break;
            case unicode::Script::Telugu: name = "Telugu"; break;
            case unicode::Script::Thaana: name = "Thaana"; break;
            case unicode::Script::Thai: name = "Thai"; break;
            case unicode::Script::Tibetan: name = "Tibetan"; break;
            case unicode::Script::Tifinagh: name = "Tifinagh"; break;
            case unicode::Script::Tirhuta: name = "Tirhuta"; break;
            case unicode::Script::Todhri: name = "Todhri"; break;
            case unicode::Script::Toto: name = "Toto"; break;
            case unicode::Script::Tulu_Tigalari: name = "Tulu_Tigalari"; break;
            case unicode::Script::Ugaritic: name = "Ugaritic"; break;
            case unicode::Script::Vai: name = "Vai"; break;
            case unicode::Script::Vithkuqi: name = "Vithkuqi"; break;
            case unicode::Script::Wancho: name = "Wancho"; break;
            case unicode::Script::Warang_Citi: name = "Warang_Citi"; break;
            case unicode::Script::Yezidi: name = "Yezidi"; break;
            case unicode::Script::Yi: name = "Yi"; break;
            case unicode::Script::Zanabazar_Square: name = "Zanabazar_Square"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::Block>: std::formatter<std::string_view>
{
    auto format(unicode::Block value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::Block::Unspecified: name = "Unspecified"; break;
            case unicode::Block::Adlam: name = "Adlam"; break;
            case unicode::Block::Aegean_Numbers: name = "Aegean_Numbers"; break;
            case unicode::Block::Ahom: name = "Ahom"; break;
            case unicode::Block::Alchemical_Symbols: name = "Alchemical_Symbols"; break;
            case unicode::Block::Alphabetic_Presentation_Forms: name = "Alphabetic_Presentation_Forms"; break;
            case unicode::Block::Anatolian_Hieroglyphs: name = "Anatolian_Hieroglyphs"; break;
            case unicode::Block::Ancient_Greek_Musical_Notation: name = "Ancient_Greek_Musical_Notation"; break;
            case unicode::Block::Ancient_Greek_Numbers: name = "Ancient_Greek_Numbers"; break;
            case unicode::Block::Ancient_Symbols: name = "Ancient_Symbols"; break;
            case unicode::Block::Arabic: name = "Arabic"; break;
            case unicode::Block::Arabic_Extended_A: name = "Arabic_Extended_A"; break;
            case unicode::Block::Arabic_Extended_B: name = "Arabic_Extended_B"; break;
            case unicode::Block::Arabic_Extended_C: name = "Arabic_Extended_C"; break;
            case unicode::Block::Arabic_Mathematical_Alphabetic_Symbols: name = "Arabic_Mathematical_Alphabetic_Symbols"; break;
            case unicode::Block::Arabic_Presentation_Forms_A: name = "Arabic_Presentation_Forms_A"; break;
            case unicode::Block::Arabic_Presentation_Forms_B: name = "Arabic_Presentation_Forms_B"; break;
            case unicode::Block::Arabic_Supplement: name = "Arabic_Supplement"; break;
            case unicode::Block::Armenian: name = "Armenian"; break;
            case unicode::Block::Arrows: name = "Arrows"; break;
            case unicode::Block::Avestan: name = "Avestan"; break;
            case unicode::Block::Balinese: name = "Balinese"; break;
            case unicode::Block::Bamum: name = "Bamum"; break;
            case unicode::Block::Bamum_Supplement: name = "Bamum_Supplement"; break;
            case unicode::Block::Basic_Latin: name = "Basic_Latin"; break;
            case unicode::Block::Bassa_Vah: name = "Bassa_Vah"; break;
            case unicode::Block::Batak: name = "Batak"; break;
            case unicode::Block::Bengali: name = "Bengali"; break;
            case unicode::Block::Bhaiksuki: name = "Bhaiksuki"; break;
            case unicode::Block::Block_Elements: name = "Block_Elements"; break;
            case unicode::Block::Bopomofo: name = "Bopomofo"; break;
            case unicode::Block::Bopomofo_Extended: name = "Bopomofo_Extended"; break;
            case unicode::Block::Box_Drawing: name = "Box_Drawing"; break;
            case unicode::Block::Brahmi: name = "Brahmi"; break;
            case unicode::Block::Braille_Patterns: name = "Braille_Patterns"; break;
            case unicode::Block::Buginese: name = "Buginese"; break;
            case unicode::Block::Buhid: name = "Buhid"; break;
            case unicode::Block::Byzantine_Musical_Symbols: name = "Byzantine_Musical_Symbols"; break;
            case unicode::Block::CJK_Compatibility: name = "CJK_Compatibility"; break;
            case unicode::Block::CJK_Compatibility_Forms: name = "CJK_Compatibility_Forms"; break;
            case unicode::Block::CJK_Compatibility_Ideographs: name = "CJK_Compatibility_Ideographs"; break;
            case unicode::Block::CJK_Compatibility_Ideographs_Supplement: name = "CJK_Compatibility_Ideographs_Supplement"; break;
            case unicode::Block::CJK_Radicals_Supplement: name = "CJK_Radicals_Supplement"; break;
            case unicode::Block::CJK_Strokes: name = "CJK_Strokes"; break;
            case unicode::Block::CJK_Symbols_and_Punctuation: name = "CJK_Symbols_and_Punctuation"; break;
            case unicode::Block::CJK_Unified_Ideographs: name = "CJK_Unified_Ideographs"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_A: name = "CJK_Unified_Ideographs_Extension_A"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_B: name = "CJK_Unified_Ideographs_Extension_B"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_C: name = "CJK_Unified_Ideographs_Extension_C"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_D: name = "CJK_Unified_Ideographs_Extension_D"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_E: name = "CJK_Unified_Ideographs_Extension_E"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_F: name = "CJK_Unified_Ideographs_Extension_F"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_G: name = "CJK_Unified_Ideographs_Extension_G"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_H: name = "CJK_Unified_Ideographs_Extension_H"; break;
            case unicode::Block::CJK_Unified_Ideographs_Extension_I: name = "CJK_Unified_Ideographs_Extension_I"; break;
            case unicode::Block::Carian: name = "Carian"; break;
            case unicode::Block::Caucasian_Albanian: name = "Caucasian_Albanian"; break;
            case unicode::Block::Chakma: name = "Chakma"; break;
            case unicode::Block::Cham: name = "Cham"; break;
            case unicode::Block::Cherokee: name = "Cherokee"; break;
            case unicode::Block::Cherokee_Supplement: name = "Cherokee_Supplement"; break;
            case unicode::Block::Chess_Symbols: name = "Chess_Symbols"; break;
            case unicode::Block::Chorasmian: name = "Chorasmian"; break;
            case unicode::Block::Combining_Diacritical_Marks: name = "Combining_Diacritical_Marks"; break;
            case unicode::Block::Combining_Diacritical_Marks_Extended: name = "Combining_Diacritical_Marks_Extended"; break;
            case unicode::Block::Combining_Diacritical_Marks_Supplement: name = "Combining_Diacritical_Marks_Supplement"; break;
            case unicode::Block::Combining_Diacritical_Marks_for_Symbols: name = "Combining_Diacritical_Marks_for_Symbols"; break;
            case unicode::Block::Combining_Half_Marks: name = "Combining_Half_Marks"; break;
            case unicode::Block::Common_Indic_Number_Forms: name = "Common_Indic_Number_Forms"; break;
            case unicode::Block::Control_Pictures: name = "Control_Pictures"; break;
            case unicode::Block::Coptic: name = "Coptic"; break;
            case unicode::Block::Coptic_Epact_Numbers: name = "Coptic_Epact_Numbers"; break;
            case unicode::Block::Counting_Rod_Numerals: name = "Counting_Rod_Numerals"; break;
            case unicode::Block::Cuneiform: name = "Cuneiform"; break;
            case unicode::Block::Cuneiform_Numbers_and_Punctuation: name = "Cuneiform_Numbers_and_Punctuation"; break;
            case unicode::Block::Currency_Symbols: name = "Currency_Symbols"; break;
            case unicode::Block::Cypriot_Syllabary: name = "Cypriot_Syllabary"; break;
            case unicode::Block::Cypro_Minoan: name = "Cypro_Minoan"; break;
            case unicode::Block::Cyrillic: name = "Cyrillic"; break;
            case unicode::Block::Cyrillic_Extended_A: name = "Cyrillic_Extended_A"; break;
            case unicode::Block::Cyrillic_Extended_B: name = "Cyrillic_Extended_B"; break;
            case unicode::Block::Cyrillic_Extended_C: name = "Cyrillic_Extended_C"; break;
            case unicode::Block::Cyrillic_Extended_D: name = "Cyrillic_Extended_D"; break;
            case unicode::Block::Cyrillic_Supplement: name = "Cyrillic_Supplement"; break;
            case unicode::Block::Deseret: name = "Deseret"; break;
            case unicode::Block::Devanagari: name = "Devanagari"; break;
            case unicode::Block::Devanagari_Extended: name = "Devanagari_Extended"; break;
            case unicode::Block::Devanagari_Extended_A: name = "Devanagari_Extended_A"; break;
            case unicode::Block::Dingbats: name = "Dingbats"; break;
            case unicode::Block::Dives_Akuru: name = "Dives_Akuru"; break;
            case unicode::Block::Dogra: name = "Dogra"; break;
            case unicode::Block::Domino_Tiles: name = "Domino_Tiles"; break;
            case unicode::Block::Duployan: name = "Duployan"; break;
            case unicode::Block::Early_Dynastic_Cuneiform: name = "Early_Dynastic_Cuneiform"; break;
            case unicode::Block::Egyptian_Hieroglyph_Format_Controls: name = "Egyptian_Hieroglyph_Format_Controls"; break;
            case unicode::Block::Egyptian_Hieroglyphs: name = "Egyptian_Hieroglyphs"; break;
            case unicode::Block::Egyptian_Hieroglyphs_Extended_A: name = "Egyptian_Hieroglyphs_Extended_A"; break;
            case unicode::Block::Elbasan: name = "Elbasan"; break;
            case unicode::Block::Elymaic: name = "Elymaic"; break;
            case unicode::Block::Emoticons: name = "Emoticons"; break;
            case unicode::Block::Enclosed_Alphanumeric_Supplement: name = "Enclosed_Alphanumeric_Supplement"; break;
            case unicode::Block::Enclosed_Alphanumerics: name = "Enclosed_Alphanumerics"; break;
            case unicode::Block::Enclosed_CJK_Letters_and_Months: name = "Enclosed_CJK_Letters_and_Months"; break;
            case unicode::Block::Enclosed_Ideographic_Supplement: name = "Enclosed_Ideographic_Supplement"; break;
            case unicode::Block::Ethiopic: name = "Ethiopic"; break;
            case unicode::Block::Ethiopic_Extended: name = "Ethiopic_Extended"; break;
            case unicode::Block::Ethiopic_Extended_A: name = "Ethiopic_Extended_A"; break;
            case unicode::Block::Ethiopic_Extended_B: name = "Ethiopic_Extended_B"; break;
            case unicode::Block::Ethiopic_Supplement: name = "Ethiopic_Supplement"; break;
            case unicode::Block::Garay: name = "Garay"; break;
            case unicode::Block::General_Punctuation: name = "General_Punctuation"; break;
            case unicode::Block::Geometric_Shapes: name = "Geometric_Shapes"; break;
            case unicode::Block::Geometric_Shapes_Extended: name = "Geometric_Shapes_Extended"; break;
            case unicode::Block::Georgian: name = "Georgian"; break;
            case unicode::Block::Georgian_Extended: name = "Georgian_Extended"; break;
            case unicode::Block::Georgian_Supplement: name = "Georgian_Supplement"; break;
            case unicode::Block::Glagolitic: name = "Glagolitic"; break;
            case unicode::Block::Glagolitic_Supplement: name = "Glagolitic_Supplement"; break;
            case unicode::Block::Gothic: name = "Gothic"; break;
            case unicode::Block::Grantha: name = "Grantha"; break;
            case unicode::Block::Greek_Extended: name = "Greek_Extended"; break;
            case unicode::Block::Greek_and_Coptic: name = "Greek_and_Coptic"; break;
            case unicode::Block::Gujarati: name = "Gujarati"; break;
            case unicode::Block::Gunjala_Gondi: name = "Gunjala_Gondi"; break;
            case unicode::Block::Gurmukhi: name = "Gurmukhi"; break;
            case unicode::Block::Gurung_Khema: name = "Gurung_Khema"; break;
            case unicode::Block::Halfwidth_and_Fullwidth_Forms: name = "Halfwidth_and_Fullwidth_Forms"; break;
            case unicode::Block::Hangul_Compatibility_Jamo: name = "Hangul_Compatibility_Jamo"; break;
            case unicode::Block::Hangul_Jamo: name = "Hangul_Jamo"; break;
            case unicode::Block::Hangul_Jamo_Extended_A: name = "Hangul_Jamo_Extended_A"; break;
            case unicode::Block::Hangul_Jamo_Extended_B: name = "Hangul_Jamo_Extended_B"; break;
            case unicode::Block::Hangul_Syllables: name = "Hangul_Syllables"; break;
            case unicode::Block::Hanifi_Rohingya: name = "Hanifi_Rohingya"; break;
            case unicode::Block::Hanunoo: name = "Hanunoo"; break;
            case unicode::Block::Hatran: name = "Hatran"; break;
            case unicode::Block::Hebrew: name = "Hebrew"; break;
            case unicode::Block::High_Private_Use_Surrogates: name = "High_Private_Use_Surrogates"; break;
            case unicode::Block::High_Surrogates: name = "High_Surrogates"; break;
            case unicode::Block::Hiragana: name = "Hiragana"; break;
            case unicode::Block::IPA_Extensions: name = "IPA_Extensions"; break;
            case unicode::Block::Ideographic_Description_Characters: name = "Ideographic_Description_Characters"; break;
            case unicode::Block::Ideographic_Symbols_and_Punctuation: name = "Ideographic_Symbols_and_Punctuation"; break;
            case unicode::Block::Imperial_Aramaic: name = "Imperial_Aramaic"; break;
            case unicode::Block::Indic_Siyaq_Numbers: name = "Indic_Siyaq_Numbers"; break;
            case unicode::Block::Inscriptional_Pahlavi: name = "Inscriptional_Pahlavi"; break;
            case unicode::Block::Inscriptional_Parthian: name = "Inscriptional_Parthian"; break;
            case unicode::Block::Javanese: name = "Javanese"; break;
            case unicode::Block::Kaithi: name = "Kaithi"; break;
            case unicode::Block::Kaktovik_Numerals: name = "Kaktovik_Numerals"; break;
            case unicode::Block::Kana_Extended_A: name = "Kana_Extended_A"; break;
            case unicode::Block::Kana_Extended_B: name = "Kana_Extended_B"; break;
            case unicode::Block::Kana_Supplement: name = "Kana_Supplement"; break;
            case unicode::Block::Kanbun: name = "Kanbun"; break;
            case unicode::Block::Kangxi_Radicals: name = "Kangxi_Radicals"; break;
            case unicode::Block::Kannada: name = "Kannada"; break;
            case unicode::Block::Katakana: name = "Katakana"; break;
            case unicode::Block::Katakana_Phonetic_Extensions: name = "Katakana_Phonetic_Extensions"; break;
            case unicode::Block::Kawi: name = "Kawi"; break;
            case unicode::Block::Kayah_Li: name = "Kayah_Li"; break;
            case unicode::Block::Kharoshthi: name = "Kharoshthi"; break;
            case unicode::Block::Khitan_Small_Script: name = "Khitan_Small_Script"; break;
            case unicode::Block::Khmer: name = "Khmer"; break;
            case unicode::Block::Khmer_Symbols: name = "Khmer_Symbols"; break;
            case unicode::Block::Khojki: name = "Khojki"; break;
            case unicode::Block::Khudawadi: name = "Khudawadi"; break;
            case unicode::Block::Kirat_Rai: name = "Kirat_Rai"; break;
            case unicode::Block::Lao: name = "Lao"; break;
            case unicode::Block::Latin_Extended_Additional: name = "Latin_Extended_Additional"; break;
            case unicode::Block::Latin_Extended_A: name = "Latin_Extended_A"; break;
            case unicode::Block::Latin_Extended_B: name = "Latin_Extended_B"; break;
            case unicode::Block::Latin_Extended_C: name = "Latin_Extended_C"; break;
            case unicode::Block::Latin_Extended_D: name = "Latin_Extended_D"; break;
            case unicode::Block::Latin_Extended_E: name = "Latin_Extended_E"; break;
            case unicode::Block::Latin_Extended_F: name = "Latin_Extended_F"; break;
            case unicode::Block::Latin_Extended_G: name = "Latin_Extended_G"; break;
            case unicode::Block::Latin_1_Supplement: name = "Latin_1_Supplement"; break;
            case unicode::Block::Lepcha: name = "Lepcha"; break;
            case unicode::Block::Letterlike_Symbols: name = "Letterlike_Symbols"; break;
            case unicode::Block::Limbu: name = "Limbu"; break;
            case unicode::Block::Linear_A: name = "Linear_A"; break;
            case unicode::Block::Linear_B_Ideograms: name = "Linear_B_Ideograms"; break;
            case unicode::Block::Linear_B_Syllabary: name = "Linear_B_Syllabary"; break;
            case unicode::Block::Lisu: name = "Lisu"; break;
            case unicode::Block::Lisu_Supplement: name = "Lisu_Supplement"; break;
            case unicode::Block::Low_Surrogates: name = "Low_Surrogates"; break;
            case unicode::Block::Lycian: name = "Lycian"; break;
            case unicode::Block::Lydian: name = "Lydian"; break;
            case unicode::Block::Mahajani: name = "Mahajani"; break;
            case unicode::Block::Mahjong_Tiles: name = "Mahjong_Tiles"; break;
            case unicode::Block::Makasar: name = "Makasar"; break;
            case unicode::Block::Malayalam: name = "Malayalam"; break;
            case unicode::Block::Mandaic: name = "Mandaic"; break;
            case unicode::Block::Manichaean: name = "Manichaean"; break;
            case unicode::Block::Marchen: name = "Marchen"; break;
            case unicode::Block::Masaram_Gondi: name = "Masaram_Gondi"; break;
            case unicode::Block::Mathematical_Alphanumeric_Symbols: name = "Mathematical_Alphanumeric_Symbols"; break;
            case unicode::Block::Mathematical_Operators: name = "Mathematical_Operators"; break;
            case unicode::Block::Mayan_Numerals: name = "Mayan_Numerals"; break;
            case unicode::Block::Medefaidrin: name = "Medefaidrin"; break;
            case unicode::Block::Meetei_Mayek: name = "Meetei_Mayek"; break;
            case unicode::Block::Meetei_Mayek_Extensions: name = "Meetei_Mayek_Extensions"; break;
            case unicode::Block::Mende_Kikakui: name = "Mende_Kikakui"; break;
            case unicode::Block::Meroitic_Cursive: name = "Meroitic_Cursive"; break;
            case unicode::Block::Meroitic_Hieroglyphs: name = "Meroitic_Hieroglyphs"; break;
            case unicode::Block::Miao: name = "Miao"; break;
            case unicode::Block::Miscellaneous_Mathematical_Symbols_A: name = "Miscellaneous_Mathematical_Symbols_A"; break;
            case unicode::Block::Miscellaneous_Mathematical_Symbols_B: name = "Miscellaneous_Mathematical_Symbols_B"; break;
            case unicode::Block::Miscellaneous_Symbols: name = "Miscellaneous_Symbols"; break;
            case unicode::Block::Miscellaneous_Symbols_and_Arrows: name = "Miscellaneous_Symbols_and_Arrows"; break;
            case unicode::Block::Miscellaneous_Symbols_and_Pictographs: name = "Miscellaneous_Symbols_and_Pictographs"; break;
            case unicode::Block::Miscellaneous_Technical: name = "Miscellaneous_Technical"; break;
            case unicode::Block::Modi: name = "Modi"; break;
            case unicode::Block::Modifier_Tone_Letters: name = "Modifier_Tone_Letters"; break;
            case unicode::Block::Mongolian: name = "Mongolian"; break;
            case unicode::Block::Mongolian_Supplement: name = "Mongolian_Supplement"; break;
            case unicode::Block::Mro: name = "Mro"; break;
            case unicode::Block::Multani: name = "Multani"; break;
            case unicode::Block::Musical_Symbols: name = "Musical_Symbols"; break;
            case unicode::Block::Myanmar: name = "Myanmar"; break;
            case unicode::Block::Myanmar_Extended_A: name = "Myanmar_Extended_A"; break;
            case unicode::Block::Myanmar_Extended_B: name = "Myanmar_Extended_B"; break;
            case unicode::Block::Myanmar_Extended_C: name = "Myanmar_Extended_C"; break;
            case unicode::Block::NKo: name = "NKo"; break;
            case unicode::Block::Nabataean: name = "Nabataean"; break;
            case unicode::Block::Nag_Mundari: name = "Nag_Mundari"; break;
            case unicode::Block::Nandinagari: name = "Nandinagari"; break;
            case unicode::Block::New_Tai_Lue: name = "New_Tai_Lue"; break;
            case unicode::Block::Newa: name = "Newa"; break;
            case unicode::Block::Number_Forms: name = "Number_Forms"; break;
            case unicode::Block::Nushu: name = "Nushu"; break;
            case unicode::Block::Nyiakeng_Puachue_Hmong: name = "Nyiakeng_Puachue_Hmong"; break;
            case unicode::Block::Ogham: name = "Ogham"; break;
            case unicode::Block::Ol_Chiki: name = "Ol_Chiki"; break;
            case unicode::Block::Ol_Onal: name = "Ol_Onal"; break;
            case unicode::Block::Old_Hungarian: name = "Old_Hungarian"; break;
            case unicode::Block::Old_Italic: name = "Old_Italic"; break;
            case unicode::Block::Old_North_Arabian: name = "Old_North_Arabian"; break;
            case unicode::Block::Old_Permic: name = "Old_Permic"; break;
            case unicode::Block::Old_Persian: name = "Old_Persian"; break;
            case unicode::Block::Old_Sogdian: name = "Old_Sogdian"; break;
            case unicode::Block::Old_South_Arabian: name = "Old_South_Arabian"; break;
            case unicode::Block::Old_Turkic: name = "Old_Turkic"; break;
            case unicode::Block::Old_Uyghur: name = "Old_Uyghur"; break;
            case unicode::Block::Optical_Character_Recognition: name = "Optical_Character_Recognition"; break;
            case unicode::Block::Oriya: name = "Oriya"; break;
            case unicode::Block::Ornamental_Dingbats: name = "Ornamental_Dingbats"; break;
            case unicode::Block::Osage: name = "Osage"; break;
            case unicode::Block::Osmanya: name = "Osmanya"; break;
            case unicode::Block::Ottoman_Siyaq_Numbers: name = "Ottoman_Siyaq_Numbers"; break;
            case unicode::Block::Pahawh_Hmong: name = "Pahawh_Hmong"; break;
            case unicode::Block::Palmyrene: name = "Palmyrene"; break;
            case unicode::Block::Pau_Cin_Hau: name = "Pau_Cin_Hau"; break;
            case unicode::Block::Phags_pa: name = "Phags_pa"; break;
            case unicode::Block::Phaistos_Disc: name = "Phaistos_Disc"; break;
            case unicode::Block::Phoenician: name = "Phoenician"; break;
            case unicode::Block::Phonetic_Extensions: name = "Phonetic_Extensions"; break;
            case unicode::Block::Phonetic_Extensions_Supplement: name = "Phonetic_Extensions_Supplement"; break;
            case unicode::Block::Playing_Cards: name = "Playing_Cards"; break;
            case unicode::Block::Private_Use_Area: name = "Private_Use_Area"; break;
            case unicode::Block::Psalter_Pahlavi: name = "Psalter_Pahlavi"; break;
            case unicode::Block::Rejang: name = "Rejang"; break;
            case unicode::Block::Rumi_Numeral_Symbols: name = "Rumi_Numeral_Symbols"; break;
            case unicode::Block::Runic: name = "Runic"; break;
            case unicode::Block::Samaritan: name = "Samaritan"; break;
            case unicode::Block::Saurashtra: name = "Saurashtra"; break;
            case unicode::Block::Sharada: name = "Sharada"; break;
            case unicode::Block::Shavian: name = "Shavian"; break;
            case unicode::Block::Shorthand_Format_Controls: name = "Shorthand_Format_Controls"; break;
            case unicode::Block::Siddham: name = "Siddham"; break;
            case unicode::Block::Sinhala: name = "Sinhala"; break;
            case unicode::Block::Sinhala_Archaic_Numbers: name = "Sinhala_Archaic_Numbers"; break;
            case unicode::Block::Small_Form_Variants: name = "Small_Form_Variants"; break;
            case unicode::Block::Small_Kana_Extension: name = "Small_Kana_Extension"; break;
            case unicode::Block::Sogdian: name = "Sogdian"; break;
            case unicode::Block::Sora_Sompeng: name = "Sora_Sompeng"; break;
            case unicode::Block::Soyombo: name = "Soyombo"; break;
            case unicode::Block::Spacing_Modifier_Letters: name = "Spacing_Modifier_Letters"; break;
            case unicode::Block::Specials: name = "Specials"; break;
            case unicode::Block::Sundanese: name = "Sundanese"; break;
            case unicode::Block::Sundanese_Supplement: name = "Sundanese_Supplement"; break;
            case unicode::Block::Sunuwar: name = "Sunuwar"; break;
            case unicode::Block::Superscripts_and_Subscripts: name = "Superscripts_and_Subscripts"; break;
            case unicode::Block::Supplemental_Arrows_A: name = "Supplemental_Arrows_A"; break;
            case unicode::Block::Supplemental_Arrows_B: name = "Supplemental_Arrows_B"; break;
            case unicode::Block::Supplemental_Arrows_C: name = "Supplemental_Arrows_C"; break;
            case unicode::Block::Supplemental_Mathematical_Operators: name = "Supplemental_Mathematical_Operators"; break;
            case unicode::Block::Supplemental_Punctuation: name = "Supplemental_Punctuation"; break;
            case unicode::Block::Supplemental_Symbols_and_Pictographs: name = "Supplemental_Symbols_and_Pictographs"; break;
            case unicode::Block::Supplementary_Private_Use_Area_A: name = "Supplementary_Private_Use_Area_A"; break;
            case unicode::Block::Supplementary_Private_Use_Area_B: name = "Supplementary_Private_Use_Area_B"; break;
            case unicode::Block::Sutton_SignWriting: name = "Sutton_SignWriting"; break;
            case unicode::Block::Syloti_Nagri: name = "Syloti_Nagri"; break;
            case unicode::Block::Symbols_and_Pictographs_Extended_A: name = "Symbols_and_Pictographs_Extended_A"; break;
            case unicode::Block::Symbols_for_Legacy_Computing: name = "Symbols_for_Legacy_Computing"; break;
            case unicode::Block::Symbols_for_Legacy_Computing_Supplement: name = "Symbols_for_Legacy_Computing_Supplement"; break;
            case unicode::Block::Syriac: name = "Syriac"; break;
            case unicode::Block::Syriac_Supplement: name = "Syriac_Supplement"; break;
            case unicode::Block::Tagalog: name = "Tagalog"; break;
            case unicode::Block::Tagbanwa: name = "Tagbanwa"; break;
            case unicode::Block::Tags: name = "Tags"; break;
            case unicode::Block::Tai_Le: name = "Tai_Le"; break;
            case unicode::Block::Tai_Tham: name = "Tai_Tham"; break;
            case unicode::Block::Tai_Viet: name = "Tai_Viet"; break;
            case unicode::Block::Tai_Xuan_Jing_Symbols: name = "Tai_Xuan_Jing_Symbols"; break;
            case unicode::Block::Takri: name = "Takri"; break;
            case unicode::Block::Tamil: name = "Tamil"; break;
            case unicode::Block::Tamil_Supplement: name = "Tamil_Supplement"; break;
            case unicode::Block::Tangsa: name = "Tangsa"; break;
            case unicode::Block::Tangut: name = "Tangut"; break;
            case unicode::Block::Tangut_Components: name = "Tangut_Components"; break;
            case unicode::Block::Tangut_Supplement: name = "Tangut_Supplement"; break;
            case unicode::Block::Telugu: name = "Telugu"; break;
            case unicode::Block::Thaana: name = "Thaana"; break;
            case unicode::Block::Thai: name = "Thai"; break;
            case unicode::Block::Tibetan: name = "Tibetan"; break;
            case unicode::Block::Tifinagh: name = "Tifinagh"; break;
            case unicode::Block::Tirhuta: name = "Tirhuta"; break;
            case unicode::Block::Todhri: name = "Todhri"; break;
            case unicode::Block::Toto: name = "Toto"; break;
            case unicode::Block::Transport_and_Map_Symbols: name = "Transport_and_Map_Symbols"; break;
            case unicode::Block::Tulu_Tigalari: name = "Tulu_Tigalari"; break;
            case unicode::Block::Ugaritic: name = "Ugaritic"; break;
            case unicode::Block::Unified_Canadian_Aboriginal_Syllabics: name = "Unified_Canadian_Aboriginal_Syllabics"; break;
            case unicode::Block::Unified_Canadian_Aboriginal_Syllabics_Extended: name = "Unified_Canadian_Aboriginal_Syllabics_Extended"; break;
            case unicode::Block::Unified_Canadian_Aboriginal_Syllabics_Extended_A: name = "Unified_Canadian_Aboriginal_Syllabics_Extended_A"; break;
            case unicode::Block::Vai: name = "Vai"; break;
            case unicode::Block::Variation_Selectors: name = "Variation_Selectors"; break;
            case unicode::Block::Variation_Selectors_Supplement: name = "Variation_Selectors_Supplement"; break;
            case unicode::Block::Vedic_Extensions: name = "Vedic_Extensions"; break;
            case unicode::Block::Vertical_Forms: name = "Vertical_Forms"; break;
            case unicode::Block::Vithkuqi: name = "Vithkuqi"; break;
            case unicode::Block::Wancho: name = "Wancho"; break;
            case unicode::Block::Warang_Citi: name = "Warang_Citi"; break;
            case unicode::Block::Yezidi: name = "Yezidi"; break;
            case unicode::Block::Yi_Radicals: name = "Yi_Radicals"; break;
            case unicode::Block::Yi_Syllables: name = "Yi_Syllables"; break;
            case unicode::Block::Yijing_Hexagram_Symbols: name = "Yijing_Hexagram_Symbols"; break;
            case unicode::Block::Zanabazar_Square: name = "Zanabazar_Square"; break;
            case unicode::Block::Znamenny_Musical_Notation: name = "Znamenny_Musical_Notation"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

template <>
struct std::formatter<unicode::EastAsianWidth>: std::formatter<std::string_view>
{
    auto format(unicode::EastAsianWidth value, auto& ctx) const
    {
        std::string_view name;
        switch (value)
        {
            // clang-format off
            case unicode::EastAsianWidth::Ambiguous: name = "Ambiguous"; break;
            case unicode::EastAsianWidth::FullWidth: name = "FullWidth"; break;
            case unicode::EastAsianWidth::HalfWidth: name = "HalfWidth"; break;
            case unicode::EastAsianWidth::Neutral: name = "Neutral"; break;
            case unicode::EastAsianWidth::Narrow: name = "Narrow"; break;
            case unicode::EastAsianWidth::Wide: name = "Wide"; break;
            case unicode::EastAsianWidth::Unspecified: name = "Unspecified"; break;
            // clang-format off
        }
        return formatter<string_view>::format(name, ctx);
    }
};

